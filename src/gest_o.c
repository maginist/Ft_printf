/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gest_o.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 21:02:03 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/17 15:47:36 by maginist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static void	add_diez(char *num, t_data *data)
{
	if (data->diez == 1)
		num[0] = '0';
}

void		gest_o2(t_data *data, char *num)
{
	num = fillbegin(num, data);
	add_diez(num, data);
	if (data->pt && data->preci <= 0 && num[0] == '0')
	{
		data->tdc += (data->size_aff - data->diez);
		num[data->diez] = 0;
		data->size_aff = data->diez;
	}
	gest_allnum(num, data);
}

void		gest_o(t_data *data, va_list ap)
{
	char	*num;

	if (data->nb_flgs == 0)
		num = butoa(va_arg(ap, int), "01234567");
	else if ((data->nb_flgs == 2 && data->flgs == 'l') || data->flgs == 'j')
		num = bulltoa(va_arg(ap, long long), "01234567");
	else if ((data->nb_flgs == 1 && data->flgs == 'l') || data->flgs == 'z')
		num = bultoa(va_arg(ap, long), "01234567");
	else if (data->nb_flgs == 1 && data->flgs == 'h')
		num = bustoa((short)va_arg(ap, int), "01234567");
	else
		num = buctoa((char)va_arg(ap, int), "01234567");
	if (data->preci > 0 || data->moins == 1)
		data->zero = 0;
	data->size_aff = (int)ft_strlen(num);
	data->preci -= data->size_aff;
	if (data->preci >= 0)
		data->size_aff += data->preci;
	if (data->zero == 0 && data->diez == 1 && num[data->size_aff - 1] != '0')
		data->size_aff += 1;
	data->tdc -= data->size_aff;
	data->plus = 0;
	data->space = 0;
	num = newstart_cleanbegin(num, data->size_aff, data);
	gest_o2(data, num);
}
