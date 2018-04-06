/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akabbouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 22:25:36 by akabbouc          #+#    #+#             */
/*   Updated: 2016/12/05 04:33:44 by akabbouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char*ft_strchr(const char *s, int c)
{
	int	i;

	i = -1;
	while (s[++i])
		if (s[i] == c)
			return ((char*)s + i);
	if (s[i] == '\0' && c == 0)
		return ((char*)s + i);
	return (NULL);
}