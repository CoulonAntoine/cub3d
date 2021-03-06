/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_exit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancoulon <ancoulon@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 17:20:15 by ancoulon          #+#    #+#             */
/*   Updated: 2021/01/18 14:38:46 by ancoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int			hook_exit(int keycode, void *param)
{
	t_game	*game;

	game = (t_game *)param;
	(void)keycode;
	exit(EXIT_SUCCESS);
}
