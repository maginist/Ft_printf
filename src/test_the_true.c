/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_the_true.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 14:13:20 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/14 10:09:00 by maginist         ###   ########.fr       */
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
	char		*p;
	int			p1;
	int			p2;

	(void)ac;
	l = 2854645485456566555;
	i = atoi(av[1]);
	f = 99.9999999999;
	c = 'u';
	str = "coucou";
	x = 255;
	p = av[1];
	p1 = ft_printf("mypf: %12c\n", c);
	p2 = printf("real: %12c\n", c);
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %hd\n", (short)i);
	p2 = printf("real: %hd\n", (short)i);
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %14.4s\n", str);
	p2 = printf("real: %14.4s\n", str);
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %20p\n", p);
	p2 = printf("real: %20p\n", p);
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %ld\n", l);
	p2 = printf("real: %ld\n", l);
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %#40.20x\n", 255);
	p2 = printf("real: %#40.20x\n", 255);
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %#20.10X\n", 255);
	p2 = printf("real: %#20.10X\n", 255);
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %20.15o\n", 8);
	p2 = printf("real: %20.15o\n", 8);
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %50.7f\n", f);
	p2 = printf("real: %50.7f\n", f);
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %%i\n");
	p2 = printf("real: %%i\n");
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %-10i\n", i);
	p2 = printf("real: %-10i\n", i);
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %10b\n", 5);
	printf("\033[0;31mBONUS\033[00m\n");
	p1 = ft_printf("mypf: %.15ld\n", (long)i);
	p2 = printf("real: %.15ld\n", (long)i);
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %010dok\n", i);
	p2 = printf("real: %010dok\n", i);
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %+10dok\n", i);
	p2 = printf("real: %+10dok\n", i);
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %+-5dok\n", i);
	p2 = printf("real: %+-5dok\n", i);
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %-1.10d\n", i);
	p2 = printf("real: %-1.10d\n", i);
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %+1.10d\n", i);
	p2 = printf("real: %+1.10d\n", i);
	comparprintf(p1, p2);
	return (0);
}
