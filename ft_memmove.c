/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapires- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 01:09:37 by mapires-          #+#    #+#             */
/*   Updated: 2022/09/30 12:44:15 by mapires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*save;

	save = dst;
	if (dst < src)
		while (len--)
			*(unsigned char *)dst++ = *(unsigned char *)src++;
	else if (dst > src)
		while (len--)
			*(unsigned char *)(dst + len) = *(unsigned char *)(src + len);
	return (save);
}
