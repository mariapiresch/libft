/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapires- <mapires-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 20:04:04 by mapires-          #+#    #+#             */
/*   Updated: 2022/09/28 12:04:54 by mapires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_start(char const *s1, char const *set)
{
	int		i;
	int		j;
	size_t	len_set;

	i = 0;
	len_set = ft_strlen(set);
	while (s1[i])
	{
		j = 0;
		while (s1[i] != set[j] && set[j])
			j++;
		if (j == (int)len_set)
			return (i);
		i++;
	}
	return (i);
}

static int	ft_end(char const *s1, char const *set)
{
	int		i;
	int		j;
	size_t	len_set;
	size_t	len_s1;

	len_set = ft_strlen(set);
	len_s1 = ft_strlen(s1);
	i = (int)len_s1;
	while (s1[i - 1] && i > 0)
	{
		j = 0;
		while (s1[i - 1] != set[j] && set[j])
			j++;
		if (j == (int)len_set)
			return (i - 1);
		i--;
	}
	return (i - 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	size_t	len;
	char	*str;
	size_t	len_s1;

	if (!s1)
		return (NULL);
	len_s1 = ft_strlen(s1);
	if (!set || len_s1 == 0)
		return ((char *)s1);
	start = ft_start(s1, set);
	end = ft_end(s1, set);
	if (start >= (int)len_s1 || end == -1)
		return ((char *)(s1 + len_s1));
	len = (size_t)(end - start + 1);
	str = ft_substr(s1, start, len);
	return (str);
}

/*int	main(void)
{
	return (0);
}*/
