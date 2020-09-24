/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_enclosing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancoulon <ancoulon@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 22:33:53 by ancoulon          #+#    #+#             */
/*   Updated: 2020/09/24 22:53:09 by ancoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

static int	is_inside_map(t_map *map, size_t i, size_t j)
{
	if (i >= 0 && i < map->height)
	{
		if (j >= 0 && j < map->width)
			return (1);
	}
	return (0);
}

static void	check_enclosing(t_map *map, size_t i, size_t j)
{
	if (!is_inside_map(map, i + 1, j) || map->content[i + 1][j] == ' ')
		err_exit(ERRTYPE_BADMAP);
	if (!is_inside_map(map, i -1, j) || map->content[i - 1][j] == ' ')
		err_exit(ERRTYPE_BADMAP);
	if (!is_inside_map(map, i, j + 1) || map->content[i][j + 1] == ' ')
		err_exit(ERRTYPE_BADMAP);
	if (!is_inside_map(map, i, j - 1) || map->content[i][j - 1] == ' ')
		err_exit(ERRTYPE_BADMAP);
}

void		map_enclosing(t_map *map)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < map->height)
	{
		j = 0;
		while(j < map->width)
		{
			if (map->content[i][j] == 0 || map->content[i][j] == 2 ||
			map->content[i][j] == 3)
			{
				check_enclosing(map, i, j);
			}
			j++;
		}
		i++;
	}
}
