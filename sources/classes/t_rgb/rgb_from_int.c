/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rgb_from_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancoulon <ancoulon@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 09:38:28 by ancoulon          #+#    #+#             */
/*   Updated: 2020/12/25 17:22:31 by ancoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

t_rgb		rgb_from_int(uint32_t ref)
{
	return (rgb_init(ref >> 16 & 255, ref >> 8 & 255, ref & 255));
}
