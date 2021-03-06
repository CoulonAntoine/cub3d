/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_file.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancoulon <ancoulon@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 11:58:03 by ancoulon          #+#    #+#             */
/*   Updated: 2021/01/11 17:18:31 by ancoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_FILE_H
# define T_FILE_H

# include "cub3d.h"

/*
** Structure **************************************************************** **
*/

typedef struct	s_file
{
	t_bool	save;
	t_list	*data;
}				t_file;

/*
** Methods ****************************************************************** **
*/

t_file			*file_init(int ac, char **av);
void			file_free(t_file *file);

#endif
