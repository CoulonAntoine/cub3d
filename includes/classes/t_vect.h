/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_vect.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancoulon <ancoulon@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 12:19:04 by ancoulon          #+#    #+#             */
/*   Updated: 2020/09/28 12:22:44 by ancoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_VECT_H
# define T_VECT_H

# include "cub3d.h"

/*
** Structure **************************************************************** **
*/

typedef struct	s_vect
{
	double	x;
	double	y;
}				t_vect;

/*
** Methods ****************************************************************** **
*/

t_vect			vect_init(double x, double y);

#endif