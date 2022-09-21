<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapires- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:50:35 by mapires-          #+#    #+#             */
/*   Updated: 2022/09/21 11:03:42 by mapires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
=======
>>>>>>> e070bacdd5142df0e5c378a80d8bce72b49dcc60
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
<<<<<<< HEAD
	while (*s)
	{
		if (*s == c)
			return ((char *) s);
		s++;
	}
	if (*s == '\0' && c == 0)
		return ((char *) s);
	return (0);
=======
	if (!s)
		return (NULL);
	while (*s)
		if (*s++ == c)
		{
			//s--;
			return ((char *) s);
		}
	if (c == 0)
		return ((char *) s);
	return (NULL);
>>>>>>> e070bacdd5142df0e5c378a80d8bce72b49dcc60
}
