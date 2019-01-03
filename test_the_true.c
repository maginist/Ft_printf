/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_the_true.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 14:13:20 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/03 15:22:35 by maginist         ###   ########.fr       */
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
	ft_printf("test: %ld rf test2\n", 1234567891234567891);
	printf("test: %ld rf test2\n", 1234567891234567891);
	return (0);
}
