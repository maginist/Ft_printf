/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_bllong.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maginist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 11:13:55 by maginist          #+#    #+#             */
/*   Updated: 2018/12/17 11:17:36 by maginist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		base_isvalide(char *base, long long size)
{
	long long							i;
	long long							j;

	i = 0;
	if (size < 2)
		return (0);
	while (i < size)
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
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

void putnbr_bllong(unsigned long long n, char *base)
{
	unsigned long long		nb;
	long long				base_size;

	base_size = (long long)ft_strlen(base);
	nb = n;
	if (!(base_isvalide(base, base_size)))
		return ;
	if (nb < base_size)
		ft_putchar(base[nb]);
	else
	{
		putnbr_bllong((nb / base_size), base);
		ft_putchar(base[nb % base_size]);
	}
}
