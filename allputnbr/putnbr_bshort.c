/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_bshort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maginist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 10:45:50 by maginist          #+#    #+#             */
/*   Updated: 2019/01/02 12:03:32 by maginist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int		base_isvalide(char *base, unsigned short size)
{
	short				i;
	short				j;

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

void	putnbr_bshort(unsigned short n, char *base)
{
	unsigned short		nb;
	unsigned short		base_size;

	base_size = (unsigned short)ft_strlen(base);
	nb = n;
	if (!(base_isvalide(base, base_size)))
		return ;
	if (nb < base_size)
		ft_putchar(base[nb]);
	else
	{
		putnbr_bshort((nb / base_size), base);
		ft_putchar(base[nb % base_size]);
	}
}
