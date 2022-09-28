/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapires- <mapires-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:29:16 by mapires-          #+#    #+#             */
/*   Updated: 2022/09/27 20:17:11 by mapires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbr_sub(char const *s, char c)
{
	int	cnt;
	int	i;

	cnt = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			cnt++;
		i++;
	}
	return (cnt + 2);
}

static void	ft_fill_ptr(char **ptr, char const *s, char c, int cnt)
{
	int	i;
	int	j;
	int	k;
	int	start;

	i = 0;
	j = 0;
	k = 0;
	start = 0;
	while (k < cnt - 1)
	{
		while (s[i] != c && s[i++])
			j++;
		ptr[k] = ft_substr(s, start, j);
		start = j + 1;
		j = 0;
		k++;
		i = start;
	}
	ptr[cnt - 1] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		cnt;

	cnt = ft_nbr_sub(s, c);
	ptr = (char **)malloc(cnt * sizeof(char *));
	if (!ptr)
		return (NULL);
	ft_fill_ptr(ptr, s, c, cnt);
	return (ptr);
}
