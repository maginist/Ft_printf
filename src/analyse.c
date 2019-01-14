/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   analyse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maginist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 15:26:07 by maginist          #+#    #+#             */
/*   Updated: 2019/01/12 11:51:01 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	analyse(char *s, int *i, int j, va_list ap)
{
	t_data	data;

	init_struct(&data, s, j);
	i[0]++;
	add_pre_flgs(&data, s, &i[0], j);
	data.tdc = stock_digit(s, &i[0], j, ap);
	if (s[i[0]] == '.')
	{
		i[0]++;
		data.pt = 1;
		data.preci = stock_digit(s, &i[0], j, ap);
	}
	stock_flgs(&data, s, &i[0], j);
	redirection(&data, ap);
	if (data.tdc < 0)
		data.tdc = 0;
	i[1] = data.size_aff + data.tdc;
	return (*i);
}
