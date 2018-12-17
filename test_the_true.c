/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_the_true.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 14:13:20 by floblanc          #+#    #+#             */
/*   Updated: 2018/12/17 17:24:20 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft/libft.h"

int		main(int ac, char **av)
{
	long int i;
	char c;
	char *str;

	(void)ac;
	i = atol(av[1]);
	c = av[1][0];
	str = av[1];
	//printf("%p\n", str);
	//printf("%#lx\n", str);
	printf("test %lx rf test2 \n", i);
	//ft_putnbr_base((unsigned)i, "0123456789");
	return (0);
}
