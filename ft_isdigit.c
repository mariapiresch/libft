/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapires- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 23:48:50 by mapires-          #+#    #+#             */
/*   Updated: 2022/09/14 00:00:54 by mapires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

/*int	main(void)
{
	int	c = 57;
	printf("El bueno: %i %i\n", c, isdigit(c));
	printf("El mío: %i %i\n", c, ft_isdigit(c));
	return (0);
}*/
