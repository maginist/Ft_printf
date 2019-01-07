/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gest_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 22:16:44 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/07 16:53:41 by maginist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	gest_p(t_data *data, va_list ap)
{
	unsigned long int	ptr;

	ptr = va_arg(ap, unsigned long int);
	data->size_aff = 14;
	data->tdc = data->tdc - 14;
	if (data->moins == 0)
		printdc(data->tdc);
	ft_putstr("0x");
	putnbr_blong(ptr, "0123456789abcdef");
	if (data->moins == 1)
		printdc(data->tdc);
}
