/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: testing <tesing@test.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 17:35:11 by testing           #+#    #+#             */
/*   Updated: 2026/09/22 17:39:19 by testing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(int c)
{
	if (32 <= c && c <= 127)
		return (1);
	return (0);
}
/*
int main()
{
	printf("%d\n", ft_isprint(15));
	printf("%d\n", ft_isprint(35));
	printf("%d\n", ft_isprint(128));
	printf("%d\n", ft_isprint(125));
	printf("%d\n", ft_isprint(' '));
}*/	
