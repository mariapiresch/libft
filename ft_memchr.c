/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapires- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:51:47 by mapires-          #+#    #+#             */
/*   Updated: 2022/09/29 23:48:37 by mapires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n && *(unsigned char *)s != '\0')
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		s++;
		n--;
	}
	if (n && *(unsigned char *)s == '\0' && (unsigned char)c == 0)
		return ((void *)s);
	return (NULL);
}

/*int	main(void)
{
	char	*str = "hol0";
	char	*dest;

	dest = (char *)ft_memchr(str, 108, 4);
	printf("%s\n", dest);
	return (0);
}*/

