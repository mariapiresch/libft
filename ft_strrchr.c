/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapires- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:01:23 by mapires-          #+#    #+#             */
/*   Updated: 2022/09/30 00:03:36 by mapires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	if (c == 0)
		return ((char *)(s + len));
	while (len > 0)
	{
		if (*(s + (int)len - 1) == (char)c)
			return ((char *)(s + len - 1));
		len--;
	}
	return (NULL);
}

/*int	main(void)
{
	char	str[] = "patata";
	printf("%s-%p\n", ft_strrchr(str, 0), (void*)ft_strrchr(str, 0));
	printf("%s-%p\n", strrchr(str, 0), (void*)strrchr(str, 0));
	return (0);
}*/
