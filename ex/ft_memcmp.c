/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Daniel <daniel.o@42.be>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 21:38:50 by Daniel            #+#    #+#             */
/*   Updated: 2026/10/04 05:04:15 by Daniel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*ps1;
	const unsigned char	*ps2;

	i = 0;
	ps1 = s1;
	ps2 = s2;
	while (i < n)
	{
		if (ps1[i] != ps2[i])
			return (ps1[i] - ps2[i]);
		i++;
	}
	return (0);
}
/*
int main()
{
	int l1[] = {0, 1, 2, 3, 4, 5, 6};
	int l2[] = {0, 1, 9, 3, 6, 7, 8};
	char *s1 = "string";
	char *s2 = "strinh";

	printf("%d\n", ft_memcmp(l1, l2, sizeof(l1)));
	printf("%d\n", ft_memcmp(l2, l1, sizeof(l1)));
	printf("%d\n\n", ft_memcmp(l1, l2, sizeof(l1)));
	printf("%d\n", ft_memcmp(s1, s2, sizeof(s1)));
	printf("%d\n", ft_memcmp(s2, s1, sizeof(s1)));
	printf("%d\n\n", ft_memcmp(s1, s2, sizeof(s1)));
	printf("%d\n", memcmp(s1, s2, 3));
}*/
