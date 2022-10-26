/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapires- <mapires-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 20:04:07 by mapires-          #+#    #+#             */
/*   Updated: 2022/10/26 09:45:36 by mapires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int			i;
	size_t		save;

	if (len == 0 && *needle)
		return (NULL);
	i = 0;
	save = len;
	while (haystack[i] && needle[i] && len)
	{
		if (haystack[i] == needle[i])
		{
			i++;
			len--;
		}
		else
		{
			haystack++;
			i = 0;
			len = --save;
		}
	}
	if (needle[i] == '\0')
		return ((char *)haystack);
	return (NULL);
}

/*int	main(void)
{
	char	haystack[30] = "hola que tal";
	char	needle[10] = "tal";

	printf("%s\n", strnstr(haystack, needle, 12));
	printf("%s\n", ft_strnstr(haystack, needle, 12));
	return (0);
}*/
