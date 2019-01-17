/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gest_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/22 15:26:20 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/16 11:13:07 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	gest_c(t_data *data, va_list ap)
{
	char	c;

	c = va_arg(ap, int);
	data->size_aff = 1;
	data->tdc = data->tdc - 1;
	if (data->moins == 0 && data->tdc > 0)
		printdc(data->tdc);
	ft_putchar(c);
	if (data->moins == 1 && data->tdc > 0)
		printdc(data->tdc);
}
