/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapires- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 01:30:07 by mapires-          #+#    #+#             */
/*   Updated: 2022/09/14 01:38:05 by mapires-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c -= 32);
	return (c);
}

/*int	main(void)
{
	int	c = 120;
	printf("Original: %i %i\n", c, toupper(c));
	printf("El mio: %i %i\n", c, ft_toupper(c));
	return (0);
}*/
