/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Daniel <daniel.o@42.be>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 17:59:25 by Daniel            #+#    #+#             */
/*   Updated: 2026/09/22 18:03:56 by Daniel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		c -= 32;
	return (c);
}
/*
int main()
{
	printf("%c\n", ft_toupper('-'));
	printf("%c\n", ft_toupper('q'));
	printf("%c\n", ft_toupper('Q'));
	printf("%c\n", ft_toupper('2'));
}*/
