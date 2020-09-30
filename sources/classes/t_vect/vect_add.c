/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_add.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancoulon <ancoulon@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 12:58:42 by ancoulon          #+#    #+#             */
/*   Updated: 2020/09/29 15:20:50 by ancoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

t_vect		vect_add(t_vect v, t_int64 n)
{
	t_vect	vect;

	vect.x = v.x + n;
	vect.y = v.y + n;
	return (vect);
}