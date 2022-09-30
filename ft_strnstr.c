/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapires- <mapires-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 20:04:07 by mapires-          #+#    #+#             */
/*   Updated: 2022/09/30 12:33:12 by mapires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;
	static int	start;

	if (len == 0 && *needle)
		return (NULL);
	if ((int)len == -1)
		len = ft_strlen(haystack);
	i = 0;
	j = 0;
	while (haystack[j] && needle[i] && j < (int)len)
	{
		if (haystack[j++] == needle[i])
			i++;
		else if (i == 0)
			j++;
		else
		{
			j = ++start;
			i = 0;
		}
	}
	if (needle[i] == '\0')
		return ((char *)(haystack + j - i));
	return (NULL);
}

/*int	main(void)
{
	printf("%s\n", strnstr(NULL, "fake", 0));
	printf("%s\n", ft_strnstr(NULL, "fake", 0));
	return (0);
}*/
