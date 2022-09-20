/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapires- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 00:57:50 by mapires-          #+#    #+#             */
/*   Updated: 2022/09/14 01:03:53 by mapires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*int	main(void)
{
	int	c = -1;
	printf("Original: %i %i\n", c, isascii(c));
	printf("El mio: %i %i\n", c, ft_isascii(c));
	return (0);
}*/
