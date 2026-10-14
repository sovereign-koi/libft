/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Daniel <daniel.o@42.be>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 22:07:46 by Daniel            #+#    #+#             */
/*   Updated: 2026/09/24 20:19:33 by Daniel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	dstlen = 0;
	srclen = 0;
	while (dstlen < dsize && dst[dstlen])
		dstlen++;
	while (src[srclen])
		srclen++;
	if (dsize == 0)
		return (srclen);
	if (dsize == dstlen)
		return (dsize + srclen);
	i = 0;
	while (i < dsize - dstlen - 1 && src[i])
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}
/*
int main()
{
	char dst[17] = "";
	char *src = "abc";

	printf("%li\n", ft_strlcat(dst, src, 17));
	printf("%s\n", dst);
}*/
