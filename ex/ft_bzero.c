/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Daniel <daniel.o@42.be>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 20:58:50 by Daniel            #+#    #+#             */
/*   Updated: 2026/09/24 21:45:29 by Daniel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = s;
	if (n == 0)
		return ;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}
/*
void print_buf(const char *label, unsigned char *buf, size_t len)
{
    printf("%s: ", label);
    for (size_t i = 0; i < len; i++)
        printf("%02x ", buf[i]);
    printf("\n");
}

int main(void)
{
    unsigned char buf[10];

    // Fill entire buffer with a known non-zero pattern (0xAA)
    memset(buf, 0xAA, sizeof(buf));
    print_buf("before", buf, sizeof(buf));

    // Zero only the first 6 bytes, leave the last 4 as canaries
    ft_bzero(buf, 6);
    print_buf("after ", buf, sizeof(buf));

    // Manual check: bytes 0-5 should be 0x00, bytes 6-9 should still be 0xAA
    int ok = 1;
    for (int i = 0; i < 6; i++)
        if (buf[i] != 0x00) ok = 0;
    for (int i = 6; i < 10; i++)
        if (buf[i] != 0xAA) ok = 0;

    printf(ok ? "PASS: bytes 0-5 zeroed, 6-9 untouched\n"
              : "FAIL: unexpected byte values\n");

    // Edge case: n == 0 should touch nothing
    unsigned char buf2[4] = {1, 2, 3, 4};
    ft_bzero(buf2, 0);
    print_buf("n=0 buf2", buf2, sizeof(buf2));

    return 0;
}*/
