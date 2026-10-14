/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: testing <tesing@test.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 16:44:16 by testing           #+#    #+#             */
/*   Updated: 2026/09/22 17:36:27 by testing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	return (0);
}
/*
int main()
{
	printf("%d\n", ft_isalpha('U'));
	printf("%d\n", ft_isalpha('Y'));
	printf("%d\n", ft_isalpha('u'));
	printf("%d\n", ft_isalpha('q'));
	printf("%d\n", ft_isalpha('G'));
	printf("%d\n", ft_isalpha('h'));
	printf("%d\n", ft_isalpha(8));
	printf("%d\n", ft_isalpha(7));
}*/
