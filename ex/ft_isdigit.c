/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: testing <tesing@test.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 16:59:35 by testing           #+#    #+#             */
/*   Updated: 2026/09/22 17:36:50 by testing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}
/*
int main()
{
	printf("%d\n", ft_isdigit('1'));
	printf("%d\n", ft_isdigit('0'));
	printf("%d\n", ft_isdigit('7'));
	printf("%d\n", ft_isdigit('6'));
	printf("%d\n", ft_isdigit('9'));
	printf("%d\n", ft_isdigit(3));
	printf("%d\n", ft_isdigit('2'));
	printf("%d\n", ft_isdigit(9));
	printf("%d\n", ft_isdigit(8));
	printf("%d\n", ft_isdigit('\0'));
}*/
