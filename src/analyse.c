/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   analyse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maginist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 15:26:07 by maginist          #+#    #+#             */
/*   Updated: 2019/01/07 16:11:19 by maginist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	analyse(char *s, int i, int j, va_list ap)
{
	t_data	data;

	init_struct(&data, s, j);
	i++;
	add_pre_flgs(&data, s, &i, j);
	data.tdc = stock_digit(s, &i, j, ap);
	if (s[i] == '.')
	{
		i++;
		data.preci = stock_digit(s, &i, j, ap);
	}
	stock_flgs(&data, s, &i, j);
	redirection(&data, ap);
	return (i);
}
