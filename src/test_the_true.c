/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_the_true.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 14:13:20 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/10 11:19:02 by maginist         ###   ########.fr       */
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

	if (ac < 2)
		return (0);
	i = atoi(av[1]);
	f = 45.82;
	c = av[1][0];
	str = av[1];
	ft_printf("test: %60.50f rf test2\n", f);
	printf("test: %60.50f rf test2\n", f);
	return (0);
}
