/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_the_true.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 14:13:20 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/14 15:44:20 by maginist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	long		l;
	int			i;
	double		f;
	char		c;
	char		*str;
	int			x;
	char		*p;
	double		fa;

	(void)ac;
	l = 2854645485456566555;
	i = atoi(av[1]);
	f = 10.56;
	fa = 99.99999999;
	c = 'u';
	str = "coucou";
	x = 42;
	p = av[1];
	ft_printf("c: %12c", c);
	printf("\n");
	printf("c: %12c", c);
	printf("\n");
	printf("------\n");
	ft_printf("hd: %hd\n", (short)i);
	printf("------\n");
	ft_printf("str: %14.4s\n", str);
	printf("------\n");
	ft_printf("p: %20p\n", p);
	printf("------\n");
	ft_printf("ld: %ld\n", l);
	printf("------\n");
	ft_printf("#40.20x: %#40.20x\n", 255);
	printf("------\n");
	ft_printf("#20.10X: %#20.10X\n", 255);
	printf("------\n");
	ft_printf("20.15o: %20.15o\n", 8);
	printf("------\n");
	//ft_printf("50.7f: %50.7f\n", f);
	printf("------\n");
	ft_printf("50.7fa: %50.7f\n", fa);
	printf("------\n");
	ft_printf("pci: %%i\n");
	printf("------\n");
	ft_printf("-10i: %-10i\n", i);
	printf("------\n");
	ft_printf("10b: %10b\n", 5);
	printf("------\n");
	ft_printf(".15ld: %.15ld\n", (long)i);
	printf("------\n");
	ft_printf("010d: %010dok\n", i);
	printf("------\n");
	ft_printf("mypf: %+10dok\n", i);
	printf("------\n");
	ft_printf("+-5d: %+-5dok\n", i);
	printf("------\n");
	ft_printf("-1.10d: %-1.10d\n", i);
	printf("------\n");
	ft_printf("+1.10d: %+1.10d\n", i);
	printf("------\n");
	ft_printf("10x: %10x\n", x);
	return (0);
}
