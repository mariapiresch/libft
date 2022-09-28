/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapires- <mapires-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 19:20:29 by mapires-          #+#    #+#             */
/*   Updated: 2022/09/27 23:23:16 by mapires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	int		i;

	len_src = ft_strlen(src);
	if (!dst)
		return (len_src);
	len_dst = ft_strlen((const char *)dst);
	i = 0;
	while (*dst && i++ < ((int)dstsize - 1))
		dst++;
	while (*src && i++ < ((int)dstsize - 1))
		*dst++ = *src++;
	if (dstsize > 0 && dstsize > len_dst)
		*dst = '\0';
	if (dstsize <= len_dst)
		return (len_src + dstsize);
	else
		return (len_src + len_dst);
}

/*int	main(void)
{
//	char	*dest;
	char	b[0xF] = "nyan !";

	printf("%d\n", 0xF);
	printf("%zu\n", ft_strlcat(NULL, b, 0));
	printf("%s", b);
//	dest = (char *)malloc(sizeof(*dest) * 15);
//	memset(dest, 0, 15);
//	memset(dest, 'r', 6);
//	memset(dest, 'r', 14);
//	printf("%zu %s\n",ft_strlcat(dest, "lorem ipsum dolor sit amet", 5), dest);
//	printf("%zu %s\n",strlcat(dest, "lorem ipsum dolor sit amet", 5), dest);
	return (0);
}*/
