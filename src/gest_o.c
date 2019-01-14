/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gest_o.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 21:02:03 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/14 09:49:32 by maginist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	gest_o(t_data *data, va_list ap)
{
	char	*num;

	if (data->nb_flgs == 0 || (data->nb_flgs == 2 && data->flgs == 'h'))
		num = butoa(va_arg(ap, int), "01234567");
	else if (data->nb_flgs == 2)
		num = bulltoa(va_arg(ap, long long), "01234567");
	else if (data->flgs == 'l')
		num = bultoa(va_arg(ap, long), "01234567");
	else
		num = bustoa((short)va_arg(ap, int), "01234567");
	if (data->preci > 0 || data->moins == 1)
		data->zero = 0;
	data->size_aff = (int)ft_strlen(num);
	data->preci -= data->size_aff;
	if (data->preci > 0)
		data->size_aff += data->preci;
	data->tdc = data->tdc - data->size_aff;
	data->plus = 0;
	data->space = 0;
	num = newstart_cleanbegin(num, data->size_aff, data);
	num = fillbegin(num, data);
	if (data->diez)
		num[0] = '0';
	gest_allnum(num, data);
}
