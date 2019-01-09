/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_the_true.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 14:13:20 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/09 17:11:53 by maginist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	int			i;
	double		f;
	char		c;
	char		*str;

	(void)ac;
	i = atoi(av[1]);
	f = 1233.1234567890;
	c = av[1][0];
	str = av[1];
	ft_printf("test: %%d rf test2\n", i);
	ft_putchar((int)f + '0');
	printf("test: %% rf test2\n");
	return (0);
}
