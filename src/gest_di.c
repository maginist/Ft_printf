/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gest_di.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 21:02:03 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/15 16:45:39 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	gest_di(t_data *data, va_list ap)
{
	char	*num;

	if (data->nb_flgs == 0)
		num = ft_itoa(va_arg(ap, int));
	else if ((data->nb_flgs == 2 && data->flgs == 'l') || data->flgs == 'j')
		num = lltoa(va_arg(ap, long long));
	else if ((data->nb_flgs == 1 && data->flgs == 'l') || data->flgs == 'z')
		num = ltoa(va_arg(ap, long));
	else if (data->nb_flgs == 1 && data->flgs == 'h')
		num = stoa((short)va_arg(ap, int));
	else
		num = ctoa((char)va_arg(ap, int));
	if (data->preci > 0 || data->moins == 1)
		data->zero = 0;
	data->size_aff = (int)ft_strlen(num);
	if (num[0] == '-')
		data->preci -= (data->size_aff - 1);
	else
		data->preci -= data->size_aff;
	if (data->preci > 0)
		data->size_aff += data->preci;
	if ((data->plus == 1 || data->space == 1) && num[0] != '-')
		data->size_aff += 1;
	data->tdc -= data->size_aff;
	num = newstart_cleanbegin(num, data->size_aff, data);
	num = fillbegin(num, data);
	if (data->pt && data->preci <= 0 && num[0] == '0')
	{
		data->tdc += data->size_aff;
		data->size_aff = 0;
		num[0] = 0;
	}
	gest_allnum(num, data);
}
