/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapires- <mapires-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 20:04:04 by mapires-          #+#    #+#             */
/*   Updated: 2022/09/26 00:38:32 by mapires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_start(char const *s1, char const *set)
{
	int		i;
	int		j;
	size_t	len_set;

	i = 0;
	len_set = ft_strlen(set);
	while (s1[i])
	{
		j = 0;
		while (s1[i] != set[j])
			j++;
		if (j == (int)len_set)
			return ((unsigned int)i);
		i++;
	}
	return (0);
}

static unsigned int	ft_end(char const *s1, char const *set)
{
	int		i;
	int		j;
	size_t	len_set;
	size_t	len_s1;

	len_set = ft_strlen(set);
	len_s1 = ft_strlen(s1);
	i = (int)len_s1;
	while (i >= 0)
	{
		j = 0;
		while (s1[i] != set[j])
			j++;
		if (j == (int)len_set)
			return ((unsigned int)i);
		i--;
	}
	return (len_s1 - 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	end;
	size_t	len;
	char		*str;

	start = ft_start(s1, set);
	end = ft_end(s1, set);
	len = (size_t)(end - start + 1);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + start, len + 1);
	return (str);
}
