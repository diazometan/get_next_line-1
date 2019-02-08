/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgyles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 17:10:17 by rgyles            #+#    #+#             */
/*   Updated: 2018/12/09 14:54:13 by rgyles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 4096
# define FD_MAX 11000

# include <stdlib.h>
# include "libft/libft.h"

int		get_next_line(const int fd, char **line);

#endif
