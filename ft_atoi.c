/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapires- <mapires-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 11:24:53 by mapires-          #+#    #+#             */
/*   Updated: 2022/09/25 11:52:45 by mapires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static bool	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v')
		return (true);
	if (c == '\f' || c == '\r' || c == ' ')
		return (true);
	return (false);
}

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str && ft_isspace(*str))
		str++;
	if (*str == '-' && ft_isdigit(*(str + 1)))
	{
		sign *= -1;
		str++;
	}
	if (*str == '+' && ft_isdigit(*(str + 1)))
		str++;
	while (*str && ft_isdigit(*str))
	{
		result *= 10;
		result += *str - '0';
		str++;
	}
	return (sign * result);
}
