/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gest_allnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/29 14:57:46 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/02 14:32:05 by maginist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	gest_allnum(char *num, t_data *data)
{
	if (data->moins == 0)
		printdc(data->tdc);
	ft_putstr(num);
	free(num);
	if (data->moins == 1)
		printdc(data->tdc);
}