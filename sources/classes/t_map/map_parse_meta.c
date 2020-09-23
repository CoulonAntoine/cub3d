/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_parse_meta.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancoulon <ancoulon@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 11:17:21 by ancoulon          #+#    #+#             */
/*   Updated: 2020/09/22 18:40:32 by ancoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

t_map_meta	g_meta_identifiers[8] = {
	{BIT_0, &map_meta_r},
	{BIT_1, &map_meta_no},
	{BIT_2, &map_meta_so},
	{BIT_3, &map_meta_we},
	{BIT_4, &map_meta_ea},
	{BIT_5, &map_meta_s},
	{BIT_6, &map_meta_f},
	{BIT_7, &map_meta_c},
};

static void	redirect(t_uint8* flag, t_uint8 bit, t_map *map, char *line)
{
	size_t	i;
	
	if (*flag & bit)
		err_exit(ERRTYPE_BADMAP);
	*flag |= bit;
	i = 0;
	while (i < 8)
	{
		if (g_meta_identifiers[i].identifier == bit)
		{
			g_meta_identifiers[i].parser(map, line);
			return ;
		}
		i++;
	}
	err_exit(ERRTYPE_BADMAP);
}

void			map_parse_meta(t_map *map, char *line, t_uint8 *flag)
{
	if (ft_strlen(line) < 2)
		err_exit(ERRTYPE_BADMAP);
	if (!ft_strncmp(line, "R ", 2))
		redirect(flag, BIT_0, map, line);
	else if (!ft_strncmp(line, "NO ", 3))
		redirect(flag, BIT_1, map, line);
	else if (!ft_strncmp(line, "SO ", 3))
		redirect(flag, BIT_2, map, line);
	else if (!ft_strncmp(line, "WE ", 3))
		redirect(flag, BIT_3, map, line);
	else if (!ft_strncmp(line, "EA ", 3))
		redirect(flag, BIT_4, map, line);
	else if (!ft_strncmp(line, "S ", 2))
		redirect(flag, BIT_5, map, line);
	else if (!ft_strncmp(line, "F ", 2))
		redirect(flag, BIT_6, map, line);
	else if (!ft_strncmp(line, "C ", 2))
		redirect(flag, BIT_7, map, line);
	else
		err_exit(ERRTYPE_BADMAP);
}

