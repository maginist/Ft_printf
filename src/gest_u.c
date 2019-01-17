/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gest_u.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 21:02:03 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/17 15:48:00 by maginist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	gest_u2(t_data *data, char *num)
{
	if (data->pt && data->preci <= 0 && num[0] == '0')
	{
		data->tdc += data->size_aff;
		data->size_aff = 0;
		num[0] = 0;
	}
	gest_allnum(num, data);
}

void	gest_u(t_data *data, va_list ap)
{
	char	*num;

	if (data->nb_flgs == 0)
		num = utoa(va_arg(ap, unsigned int));
	else if ((data->nb_flgs == 2 && data->flgs == 'l') || data->flgs == 'j')
		num = ulltoa(va_arg(ap, unsigned long long));
	else if ((data->nb_flgs == 1 && data->flgs == 'l') || data->flgs == 'z')
		num = ultoa(va_arg(ap, unsigned long));
	else if (data->nb_flgs == 1 && data->flgs == 'h')
		num = ustoa((short)va_arg(ap, unsigned int));
	else
		num = uctoa((char)va_arg(ap, unsigned int));
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
	gest_u2(data, num);
}
