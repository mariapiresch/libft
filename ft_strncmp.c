/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapires- <mapires-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 19:24:06 by mapires-          #+#    #+#             */
/*   Updated: 2022/09/30 00:21:02 by mapires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	if ((int)n == -1)
		n = ft_strlen(s1) + ft_strlen(s2);
	while (s1[i] && s2[i] && i < (int)n)
	{
		result = (unsigned char)s1[i] - (unsigned char)s2[i];
		if (result == 0)
			i++;
		else
			return (result);
	}
	if (s1[i] == '\0' && s2[i] && i < (int)n)
		result = - (unsigned char)s2[i];
	else if (s1[i] && s2[i] == '\0' && i < (int)n)
		result = (unsigned char)s1[i];
	return (result);
}
