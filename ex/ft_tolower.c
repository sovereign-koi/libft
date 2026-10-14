/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Daniel <daniel.o@42.be>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 18:04:21 by Daniel            #+#    #+#             */
/*   Updated: 2026/09/22 18:06:58 by Daniel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		c += 32;
	return (c);
}
/*
int main()
{
	printf("%c\n", ft_tolower(35));
	printf("%c\n", ft_tolower('s'));
	printf("%c\n", ft_tolower('Q'));
	printf("%c\n", ft_tolower('5'));
	printf("%c\n", ft_tolower('-'));
}*/
