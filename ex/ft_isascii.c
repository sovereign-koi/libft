/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: testing <tesing@test.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 17:20:04 by testing           #+#    #+#             */
/*   Updated: 2026/09/22 17:34:59 by testing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	return (0);
}
/*
int main()
{
	printf("%d\n", ft_isascii(-1));
	printf("%d\n", ft_isascii('\0'));
	printf("%d\n", ft_isascii('D'));
	printf("%d\n", ft_isascii('	'));
	printf("%d\n", ft_isascii(256));
}*/
