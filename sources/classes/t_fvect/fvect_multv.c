/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fvect_multv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancoulon <ancoulon@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 12:57:15 by ancoulon          #+#    #+#             */
/*   Updated: 2020/09/29 15:23:18 by ancoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

t_fvect		fvect_multv(t_fvect v1, t_fvect v2)
{
	t_fvect	vect;

	vect.x = v1.x * v2.x;
	vect.y = v1.y * v2.y;
	return (vect);
}
