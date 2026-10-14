/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Daniel <daniel.o@42.be>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 23:11:10 by Daniel            #+#    #+#             */
/*   Updated: 2026/09/25 00:55:22 by Daniel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*pdest;
	const unsigned char *psrc;

	pdest = dest;
	psrc = src;
	if (dest == src)
		return (dest);
	if (src < dest)
	{
		i = 0;
		while (i < n)
		{
			pdest[i] = psrc[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i != 0)
		{
			i--;
			pdest[i] = psrc[i];
		}
	}
	return (dest);
}
/*
int main()
{
	int i = 0;
	int n = 6;

	char dst[20] = {0};
	char *src = "testing";

	ft_memmove(dst, src, n);
	while (i < n)
	{
		write(1, &dst[i], 1);
		i++;
	}
	write(1, "\n", 1);
}*/
