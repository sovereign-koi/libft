/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Daniel <daniel.o@42.be>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 17:42:12 by Daniel            #+#    #+#             */
/*   Updated: 2026/09/22 17:46:24 by Daniel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}
/*
int main()
{
	printf("%d\n", ft_strlen("check"));
	printf("%d\n", ft_strlen("    ghasd"));
	printf("%d\n", ft_strlen("testing"));
}*/
