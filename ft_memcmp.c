/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapires- <mapires-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 19:42:15 by mapires-          #+#    #+#             */
/*   Updated: 2022/09/23 19:57:14 by mapires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	result;

	result = 0;
	while (n--)
	{
		result = *(unsigned char *)s1 - *(unsigned char *)s2;
		if (result == 0)
		{
			s1++;
			s2++;
		}
		else
			return (result);
	}
	return (result);
}
