/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_the_true.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 14:13:20 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/11 16:13:32 by maginist         ###   ########.fr       */
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
	f = 42.55;
	c = 'u';
	str = "coucou";
	x = 255;
	p = av[1];
	p1 = ft_printf("mypf: %c\n", c);
	p2 = printf("real: %c\n", c);
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %d\n", i);
	p2 = printf("real: %d\n", i);
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %s\n", str);
	p2 = printf("real: %s\n", str);
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %p\n", p);
	p2 = printf("real: %p\n", p);
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %ld\n", l);
	p2 = printf("real: %ld\n", l);
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %x\n", 255);
	p2 = printf("real: %x\n", 255);
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %X\n", 255);
	p2 = printf("real: %X\n", 255);
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %o\n", 8);
	p2 = printf("real: %o\n", 8);
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %f\n", f);
	p2 = printf("real: %f\n", f);
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %%\n");
	p2 = printf("real: %%\n");
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %i\n", i);
	p2 = printf("real: %i\n", i);
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %b\n", 5);
	printf("\033[0;31mBONUS\033[00m\n");
	p1 = ft_printf("mypf: %.15d\n", i);
	p2 = printf("real: %.15d\n", i);
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %-10dok\n", i);
	p2 = printf("real: %-10dok\n", i);
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %+10dok\n", i);
	p2 = printf("real: %+10dok\n", i);
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %+-5d\n", i);
	p2 = printf("real: %+-5d\n", i);
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %-1.10d\n", i);
	p2 = printf("real: %-1.10d\n", i);
	comparprintf(p1, p2);
	p1 = ft_printf("mypf: %+1.10d\n", i);
	p2 = printf("real: %+1.10d\n", i);
	comparprintf(p1, p2);
	return (0);
}
