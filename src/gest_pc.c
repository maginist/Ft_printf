/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gest_pc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maginist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 17:04:46 by maginist          #+#    #+#             */
/*   Updated: 2019/01/16 11:09:31 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	gest_pc(t_data *data, va_list ap)
{
	(void)ap;
	(void)*data;
	data->size_aff += 1;
	data->tdc -= data->size_aff;
	if (data->moins == 0 && data->tdc > 0)
		printdc(data->tdc);
	write(1, "%", 1);
	if (data->moins == 1 && data->tdc > 0)
		printdc(data->tdc);
}
