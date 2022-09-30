/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapires- <mapires-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:29:16 by mapires-          #+#    #+#             */
/*   Updated: 2022/09/30 15:17:40 by mapires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbr_sub(char const *s, char c)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c)
			cnt++;
		while (s[i] != c)
			i++;
	}
	return (cnt + 1);
}

/*static void	ft_fill_ptr(char **ptr, char const *s, char c, int cnt)
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
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
			start = i;
		while (s[i] != c && s[i++])
			j++;
		ptr[k] = ft_substr(s, start, j);
		j = 0;
		k++;
	}
	ptr[cnt - 1] = NULL;
}

char	**ft_split(char const *s, char c)
{
	int	cnt;
	char	**str;

	cnt = ft_nbr_sub(s, c);
	str = (char **)malloc(cnt * sizeof(char *));
	if (!str)
		return (NULL);
	ft_fill_ptr(str, s, c, cnt);
	return (str);
}*/

int	main(void)
{
	printf("%i\n", ft_nbr_sub("hola que tal ", ' '));
	return (0);
}
