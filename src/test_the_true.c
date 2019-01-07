/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_the_true.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 14:13:20 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/07 16:14:54 by maginist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	int		i;
	double		f;
	char	c;
	char	*str;

	(void)ac;
	i = atoi(av[1]);
	f = 1233.1234567890;
	c = av[1][0];
	str = av[1];
	//ft_printf("test: %.4ld rf test2\n", 1234567891234567891);
	ft_putchar((int)f + '0');
	printf("test: %f rf test2\n", (f * 10) - (double)((int)(f * 10)));
	return (0);
}
