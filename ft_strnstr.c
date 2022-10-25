/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapires- <mapires-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 20:04:07 by mapires-          #+#    #+#             */
/*   Updated: 2022/10/25 10:54:48 by mapires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int			i;
	int			j;
	size_t		save;

	if (len == 0 && *needle)
		return (NULL);
	i = 0;
	j = 0;
	save = len;
	while (haystack[j] && needle[i] && len)
	{
		if (haystack[j++] == needle[i++])
			len--;
		else
		{
			haystack++;
			j = 0;
			i = 0;
			len = --save;
		}
	}
	if (needle[i] == '\0')
		return ((char *)haystack);
	return (NULL);
}

/*char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (!*needle)
		return ((char *)haystack);
	if (!len)
		return (NULL);
	while (*haystack && len)
	{
		i = -1;
		while (haystack[++i] && haystack[i] == needle[i] && len - i)
			if (!needle[i + 1])
				return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}*/

/*int	main(void)
{
	char	haystack[30] = "aaabcabcd";
	char needle[10] = "abcd";

	printf("%s\n", strnstr(haystack, needle, 9));
	printf("%s\n", ft_strnstr(haystack, needle, 9));
	return (0);
}*/
