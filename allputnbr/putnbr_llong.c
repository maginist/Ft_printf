/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_llong.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 11:49:39 by floblanc          #+#    #+#             */
/*   Updated: 2018/12/17 11:50:44 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	putnbr_llong(long long n)
{
	unsigned long long	nb;

	nb = n;
	if (n < 0)
	{
		ft_putchar('-');
		nb = -n;
	}
	if (nb < 10)
		ft_putchar(nb + '0');
	else
	{
		ft_putnbr((nb / 10));
		ft_putchar((nb % 10) + '0');
	}
}
