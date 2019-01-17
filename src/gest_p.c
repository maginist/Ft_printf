/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gest_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 22:16:44 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/17 10:55:08 by maginist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	gest_p(t_data *data, va_list ap)
{
	unsigned long int	ptr;
	char				*str;

	ptr = va_arg(ap, unsigned long int);
	data->size_aff = 14;
	data->tdc = data->tdc - 14;
	if (data->moins == 0 && data->tdc > 0)
		printdc(data->tdc);
	write(1, "0x", 2);
	str = bultoa(ptr, "0123456789abcdef");
	write(1, str, data->size_aff);
	free(str);
	if (data->moins == 1 && data->tdc > 0)
		printdc(data->tdc);
}
