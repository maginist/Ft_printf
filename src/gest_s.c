/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gest_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/22 16:19:21 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/07 16:53:42 by maginist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	gest_s(t_data *data, va_list ap)
{
	char	*stock;
	int		i;

	i = 0;
	stock = va_arg(ap, char*);
	if (data->preci < (int)ft_strlen(stock) && data->preci > 0)
		data->size_aff = data->preci;
	else
		data->size_aff = ft_strlen(stock);
	data->tdc = data->tdc - data->size_aff;
	if (data->moins == 0)
		printdc(data->tdc);
	while (i < data->size_aff)
		ft_putchar(stock[i++]);
	if (data->moins == 1)
		printdc(data->tdc);
}
