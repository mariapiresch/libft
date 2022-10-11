/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapires- <mapires-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:29:16 by mapires-          #+#    #+#             */
/*   Updated: 2022/10/11 23:17:38 by mapires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbr_sub(char const *s, char c)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
			cnt++;
		while (s[i] != c && s[i])
			i++;
	}
	return (cnt + 1);
}

static void	ft_free_ptr(char **ptr, int k)
{
	while (k)
		free(ptr[--k]);
	free(ptr);
}

static void	ft_fill_ptr(char **ptr, char const *s, char c, int cnt)
{
	int			i;
	int			j;
	int			k;
	static int	start;

	k = 0;
	j = 0;
	i = 0;
	while (k < cnt - 1)
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
			start = i;
		while (s[i] != c && s[i++])
			j++;
		ptr[k] = ft_substr(s, start, j);
		if (!ptr[k++])
		{
			ft_free_ptr(ptr, --k);
			return ;
		}
		j = 0;
	}
	ptr[cnt - 1] = NULL;
}

char	**ft_split(char const *s, char c)
{
	int		cnt;
	char	**str;

	if (!s)
		return (NULL);
	cnt = ft_nbr_sub(s, c);
	str = (char **)malloc(cnt * sizeof(char *));
	if (!str)
		return (NULL);
	ft_fill_ptr(str, s, c, cnt);
	return (str);
}

/*int	main(void)
{
	char	**ptr = ft_split("tripouille", 0);

	if (!ptr)
		return (0);
	else
		while (*ptr)
		{
			printf("%s\n", *ptr);
			ptr++;
		}
	return (0);
}*/
