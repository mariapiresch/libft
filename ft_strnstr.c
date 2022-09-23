/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapires- <mapires-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 20:04:07 by mapires-          #+#    #+#             */
/*   Updated: 2022/09/24 01:43:40 by mapires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	lon;
	int		i;
	int		j;

	lon = ft_strlen(needle);
	if (lon == 0)
		return ((char *)haystack);
	i = 0;
	j = 0;
	while (haystack[j] && needle[i] && j < (int)len)
	{
		if (haystack[j] == needle[i])
		{
			i++;
			j++;
		}
		else if (i == 0)
			j++;
		else
			i = 0;
	}
	if (needle[i] == '\0')
		return ((char *)(haystack + j - i));
	else
		return (0);
}

/*int	main(void)
{
	printf("%s\n", strnstr("hola que tal", "tal", 0));
	printf("%s\n", ft_strnstr("hola que tal", "tal", 0));
	return (0);
}*/
