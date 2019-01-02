/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gest_u.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 21:02:03 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/02 15:54:52 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	gest_u(t_data *data, va_list ap)
{
	char	*num;

	if (data->nb_flgs == 0 || (data->nb_flgs == 2 && data->flgs == 'h'))
		num = utoa(va_arg(ap, int));
	else if (data->nb_flgs == 2)
		num = ulltoa(va_arg(ap, long long));
	else if (data->flgs == 'l')
		num = ultoa(va_arg(ap, long));
	else
		num = ustoa((short)va_arg(ap, int));
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
	gest_allnum(num, data);
}
