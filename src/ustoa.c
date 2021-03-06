/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ustoa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 11:37:56 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/07 16:15:49 by maginist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static unsigned short int	ft_size(unsigned short int n)
{
	unsigned short int	i;

	i = 0;
	if (n == 0)
		i = 1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char						*ustoa(unsigned short int n)
{
	unsigned short int	i;
	char				*str;

	i = ft_size(n);
	if (!(str = (char*)malloc(sizeof(char) * (i + 1))))
		return (0);
	str[i] = '\0';
	i--;
	while (i >= 0)
	{
		str[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	return (str);
}
