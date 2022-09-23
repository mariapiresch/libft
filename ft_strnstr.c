/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapires- <mapires-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 20:04:07 by mapires-          #+#    #+#             */
/*   Updated: 2022/09/23 20:32:18 by mapires-         ###   ########.fr       */
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
	while (*haystack && needle[i] && j < (int)len)
	{
		if (*haystack == needle[i])
		{
			i++;
			j++;
		}
		else
		{
			i = 0;
			j = 0;
		}
		haystack++;
	}
	if (j == (int)len)
		return ((char *)(haystack - (int)len));
	else
		return (0);
}
