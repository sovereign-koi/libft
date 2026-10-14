/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Daniel <daniel.o@42.be>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 21:48:43 by Daniel            #+#    #+#             */
/*   Updated: 2026/09/24 23:02:28 by Daniel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <bsd/string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*pdst;
	unsigned const char	*psrc;

	i = 0;
	pdst = dest;
	psrc = src;
	if (n == 0)
		return (dest);
	while (i < n)
	{
		pdst[i] = psrc[i];
		i++;
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

	ft_memcpy(dst, src, n);
	while (i < n)
	{
		write(1, &dst[i], 1);
		i++;
	}
}*/

/*
void *ft_memcpy_buggy(void *dest, const void *src, size_t n)
{
    size_t          i;
    unsigned char   *pdst;
    unsigned const char   *psrc;

    i = 0;
    pdst = dest;
    psrc = src;
    while (i <= n)          // deliberately reintroducing the off-by-one
    {
        pdst[i] = psrc[i];
        i++;
    }
    return (dest);
}

typedef void *(*memcpy_fn)(void *, const void *, size_t);

int run_test(const char *label, memcpy_fn fn, size_t n)
{
    char    dst[20];
    char    ref[20];
    char    *src = "testing";
    int     pass;
    size_t  i;

    memset(dst, 0xAA, sizeof(dst));
    memset(ref, 0xAA, sizeof(ref));

    fn(dst, src, n);
    memcpy(ref, src, n);

    pass = (memcmp(dst, ref, sizeof(dst)) == 0);
    printf("%-25s: %s\n", label, pass ? "PASS" : "FAIL");
    if (!pass)
    {
        printf("  got: ");
        for (i = 0; i < sizeof(dst); i++)
            printf("%02x ", (unsigned char)dst[i]);
        printf("\n  exp: ");
        for (i = 0; i < sizeof(ref); i++)
            printf("%02x ", (unsigned char)ref[i]);
        printf("\n");
    }
    return (pass);
}

int main(void)
{
    run_test("correct: copy 6 bytes", ft_memcpy, 6);
    run_test("correct: copy 0 bytes", ft_memcpy, 0);
    run_test("BUGGY: off-by-one copy", ft_memcpy_buggy, 6);
    return (0);
}*/
