/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_parse_content.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancoulon <ancoulon@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 14:03:14 by ancoulon          #+#    #+#             */
/*   Updated: 2020/12/17 16:09:31 by ancoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

static void		map_size(t_map *map, t_list *list)
{
	t_list	*el;
	size_t	len;

	el = list;
	map->height = 0;
	map->width = 0;
	while (el && el->content && ((char *)el->content)[0] != '\0')
	{
		map->height++;
		len = ft_strlen((char *)el->content);
		if (len > map->width)
			map->width = len;
		el = el->next;
	}
}

static void		parse_content_line(t_map *map, char *line, size_t index)
{
	size_t		i;
	size_t		len;
	t_list		*el;

	i = 0;
	len = ft_strlen(line);
	if (!(map->content[index] = malloc(map->width)))
		err_exit(ERRTYPE_NOMEM);
	ft_memset(map->content[index], -1, map->width);
	while (line[i])
	{
		if (line[i] >= '0' && line[i] <= '1')
			map->content[index][i] = line[i] - 48;
		else if (line[i] == '2')
		{
			if (!(el = ft_lstnew(sprite_init(vect_init(i, index)))))
				err_exit(ERRTYPE_NOMEM);
			ft_lstadd_back(&map->sprites, el);
			map->content[index][i] = 0;
		}
		else if (line[i] == 'N' || line[i] == 'E' ||
		line[i] == 'S' || line[i] == 'W')
		{
			if (map->direction)
				err_exit(ERRTYPE_BADMAP);
			map->content[index][i] = 0;
			map->direction = line[i];
			map->pos_x = i;
			map->pos_y = index;
		}
		else if (line[i] != ' ')
			err_exit(ERRTYPE_BADMAP);
		i++;
	}
}

void			map_parse_content(t_map *map, t_list *list)
{
	t_list	*el;
	int		end;
	size_t	i;

	map_size(map, list);
	if (!(map->content = (t_int8 **)malloc(map->height * sizeof(t_int8 *))))
		err_exit(ERRTYPE_NOMEM);
	el = list;
	end = 0;
	i = 0;
	map->direction = 0;
	while (el && el->content)
	{
		if (((char *)el->content)[0] == '\0')
			break ;
		parse_content_line(map, (char *)el->content, i);
		el = el->next;
		i++;
	}
	if (!map->direction)
		err_exit(ERRTYPE_BADMAP);
	map->s_len = ft_lstsize(map->sprites);
}
