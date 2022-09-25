/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapires- <mapires-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 19:20:29 by mapires-          #+#    #+#             */
/*   Updated: 2022/09/25 18:51:54 by mapires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	int		i;

	len_dst = ft_strlen((const char *)dst);
	len_src = ft_strlen(src);
	i = 0;
	while (*dst && i++ < (int)dstsize - 1)
		dst++;
	while (*src && i++ < (int)dstsize - 1)
		*dst++ = *src++;
	if (dstsize > 0 && dstsize > len_dst)
		*dst = '\0';
	if (dstsize <= len_dst)
		return (len_src + dstsize);
	else
		return (len_src + len_dst);
}

int	main(void)
{
	char	dest[] = "01234567890123";

	printf("%zu %s\n",ft_strlcat(dest, "lorem ipsum dolor sit amet", 3), dest);
	//printf("%zu %s\n",strlcat(dest, "lorem ipsum dolor sit amet", -1), dest);
	return (0);
}
