/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_the_true.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 14:13:20 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/17 18:56:16 by maginist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <stdio.h>

void	comparprintf(int p1, int p2)
{
	if (p1 == p2)
		printf("\033[2;m[RET OK]\033[00m\n");
	else
	{
		printf("p1 = %d\n", p1);
		printf("p2 = %d\n", p2);
		printf("\033[35;3m[WRONG]\033[00m\n");
	}
}

int		main(int ac, char **av)
{
	long		l;
	int			i;
	double		f;
	char		c;
	char		*str;
	int			x;
	double		fa;
	char		*p;
	int			p1;
	int			p2;

	(void)ac;
	l = 2854645485456566555;
	i = atoi(av[1]);
	fa = 99.9999999999;
	f = 10.56999999999;
	c = 'u';
	str = ft_strdup("co  uco  u");
	str[1] = 25;
	str[6] = 2;
	x = 42;
	p = av[1];
	p1 = ft_printf("@moulitest: {%4.s}", "42");
	printf("\n");
	p2 = printf("@moulitest: {%4.s}", "42");
	printf("\n");
	comparprintf(p1, p2);
	p1 = ft_printf("@moulitest: {%05.s}", 0);
	printf("\n");
	p2 = printf("@moulitest: {%05.s}", 0);
	printf("\n");
	comparprintf(p1, p2);
	p1 = ft_printf("@moulitest: {%.*s}", 0, "42");
	printf("\n");
	p2 = printf("@moulitest: {%.*s}", 0, "42");
	printf("\n");
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %hd", (short)i);
	printf("\n");
	p2 = printf("real: %hd", (short)i);
	printf("\n");
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %14.4s", str);
	printf("\n");
	p2 = printf("real: %14.4s", str);
	printf("\n");
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %20p", p);
	printf("\n");
	p2 = printf("real: %20p", p);
	printf("\n");
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %ld", l);
	printf("\n");
	p2 = printf("real: %ld", l);
	printf("\n");
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %#40.20x", 255);
	printf("\n");
	p2 = printf("real: %#40.20x", 255);
	printf("\n");
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %#20.10X", 255);
	printf("\n");
	p2 = printf("real: %#20.10X", 255);
	printf("\n");
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %20.15o", 8);
	printf("\n");
	p2 = printf("real: %20.15o", 8);
	printf("\n");
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %50.7f", fa);
	printf("\n");
	p2 = printf("real: %50.7f", fa);
	printf("\n");
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %50.7f", f);
	printf("\n");
	p2 = printf("real: %50.7f", f);
	printf("\n");
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %%i");
	printf("\n");
	p2 = printf("real: %%i");
	printf("\n");
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %-10i", i);
	printf("\n");
	p2 = printf("real: %-10i", i);
	printf("\n");
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %10b", 5);
	printf("\n");
	printf("\033[0;31mBONUS\033[00m\n");
	p1 = ft_printf("mypf: %.15ld", (long)i);
	printf("\n");
	p2 = printf("real: %.15ld", (long)i);
	printf("\n");
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %010dok", i);
	printf("\n");
	p2 = printf("real: %010dok", i);
	printf("\n");
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %+10d", i);
	printf("\n");
	p2 = printf("real: %+10d", i);
	printf("\n");
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %+-5d", i);
	printf("\n");
	p2 = printf("real: %+-5d", i);
	printf("\n");
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %-1.10d", i);
	printf("\n");
	p2 = printf("real: %-1.10d", i);
	printf("\n");
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %+1.10d", i);
	printf("\n");
	p2 = printf("real: %+1.10d", i);
	printf("\n");
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: |%i", 42);
	printf("\n");
	p2 = printf("real: |%i", 42);
	printf("\n");
	comparprintf(p1, p2);
	return (0);
}
