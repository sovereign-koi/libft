/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: testing <tesing@test.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 17:14:54 by testing           #+#    #+#             */
/*   Updated: 2026/09/22 17:36:21 by testing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalnum(int c)
{
	if (('0' <= c && c <= '9')
		|| ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	return (0);
}
/*
int main()
{
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalnum('Z'));
	printf("%d\n", ft_isalnum('-'));
	printf("%d\n", ft_isalnum('8'));
	printf("%d\n", ft_isalnum('0'));
}*/
