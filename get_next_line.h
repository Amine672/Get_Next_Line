/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akabbouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/18 23:26:47 by akabbouc          #+#    #+#             */
/*   Updated: 2016/12/18 23:37:37 by akabbouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 10
# include <fcntl.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef struct		s_stock
{
	char			*data;
	int				fd;
	struct s_stock	*next;
}					t_stock;

int					get_next_line(const int fd, char **line);
#endif
