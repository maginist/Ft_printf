/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_the_true.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 14:13:20 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/02 15:25:06 by maginist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	int		i;
	char	c;
	char	*str;

	(void)ac;
	i = atoi(av[1]);
	c = av[1][0];
	str = av[1];
	//ft_printf("test: %'d rf test2\n", i);
	printf("test: %d rf test2\n", i);
	printf("%'d kkk\n", 11555000);
	printf("test: %d rf test2\n", i);
	return (0);
}
