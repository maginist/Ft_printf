/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gest_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/22 16:19:21 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/17 19:05:38 by maginist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	gest_s(t_data *data, va_list ap)
{
	char	*stock;
	int		i;

	i = 0;
	if (!(stock = va_arg(ap, char*)))
		stock = "(null)";
	if (data->preci < (int)ft_strlen(stock) && data->preci > 0)
		data->size_aff = data->preci;
	else
		data->size_aff = ft_strlen(stock);
	if (data->preci == 0)
		data->size_aff = 0;
	data->tdc -= data->size_aff;
	if (data->zero && data->moins == 0 && data->tdc > 0)
		printpreci(data->tdc);
	else if (data->moins == 0 && data->tdc > 0)
		printdc(data->tdc);
	write(1, stock, (size_t)(data->size_aff));
	if (data->moins == 1 && data->tdc > 0)
		printdc(data->tdc);
}
