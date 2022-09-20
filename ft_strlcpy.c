/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapires- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 21:41:32 by mapires-          #+#    #+#             */
/*   Updated: 2022/09/21 00:16:05 by mapires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	len = ft_strlen(src);
	while (dstsize > 1 && *src)
	{
		*dst++ = *(char *)src++;
		dstsize--;
	}
	if (dstsize > 0)
		*dst = '\0';
	return (len);
}
