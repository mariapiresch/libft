/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapires- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 00:11:58 by mapires-          #+#    #+#             */
/*   Updated: 2022/09/27 21:53:14 by mapires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*str;
	unsigned char	*str2;
	size_t			i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	str = (unsigned char *)src;
	str2 = dst;
	while (i < n)
	{
		str2[i] = str[i];
		i++;
	}
	return (dst);
}
