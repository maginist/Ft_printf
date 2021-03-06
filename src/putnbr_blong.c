/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_blong.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maginist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 11:03:49 by maginist          #+#    #+#             */
/*   Updated: 2019/01/07 16:14:07 by maginist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int		base_isvalide(char *base, unsigned long size)
{
	unsigned long				i;
	unsigned long				j;

	i = 0;
	if (size < 2)
		return (0);
	while (i < size)
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	putnbr_blong(unsigned long n, char *base)
{
	unsigned long		nb;
	unsigned long		base_size;

	base_size = (unsigned long)ft_strlen(base);
	nb = n;
	if (!(base_isvalide(base, base_size)))
		return ;
	if (nb < base_size)
		ft_putchar(base[nb]);
	else
	{
		putnbr_blong((nb / base_size), base);
		ft_putchar(base[nb % base_size]);
	}
}
