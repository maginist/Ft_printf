/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gest_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 22:16:44 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/17 13:17:42 by maginist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	gest_p(t_data *data, va_list ap)
{
	unsigned long int	ptr;
	char				*str;
	int					preci;

	ptr = va_arg(ap, unsigned long int);
	str = bultoa(ptr, "0123456789abcdef");
	data->size_aff = ft_strlen(str);
	preci = data->preci - data->size_aff;
	data->tdc -= data->size_aff + 2;
	if (data->moins == 0 && data->tdc > 0)
		printdc(data->tdc);
	write(1, "0x", 2);
	if (preci > 0)
		printpreci(preci);
	if (!(data->preci <= 0 && data->pt == 1))
		write(1, str, data->size_aff);
	free(str);
	if (data->moins == 1 && data->tdc > 0)
		printdc(data->tdc);
	data->size_aff += 2;
}
