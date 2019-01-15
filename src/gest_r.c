/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gest_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/22 16:19:21 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/15 17:41:10 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	gest_r(t_data *data, va_list ap)
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
	data->tdc = data->tdc - data->size_aff;
	if (data->moins == 0)
		printdc(data->tdc);
	while (i < data->size_aff)
	{
		if (stock[i] >= ' ' && stock[i] <= 126)
			write(1, &stock[i++], 1);
		else
		{
			write(1, "\\", 1);
			if (ft_strlen(butoa(stock[i], "0123456789abcdef")) < 2)
				write(1, "0", 1);
			ft_putstr(butoa(stock[i++], "0123456789abcdef"));	
		}
	}
	if (data->moins == 1)
		printdc(data->tdc);
}
