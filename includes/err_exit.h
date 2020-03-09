/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   err_exit.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancoulon <ancoulon@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 15:03:11 by ancoulon          #+#    #+#             */
/*   Updated: 2020/03/09 16:36:48 by ancoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERR_EXIT_H
# define ERR_EXIT_H

# define ERR_PREFIX "\033[38;5;196mError\n\033[38;5;247m"
# define ERR_SUFFIX "\033[0m\n"

# define ERRTYPE_MLX "The graphical library could not work properly."
# define ERRTYPE_NOMEM "The system ran out of memory."
# define ERRTYPE_NOARG "One to two arguments are required."
# define ERRTYPE_BADARG "One or more arguments are invalid."
# define ERRTYPE_NOMAP "The map does not exist."
# define ERRTYPE_BADMAP "The provided map is incorrect."

void			err_exit(char *msg);

#endif
