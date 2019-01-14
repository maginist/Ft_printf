/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillbegin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/28 23:55:44 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/14 15:39:06 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

char	*fillbegin(char *num, t_data *data)
{
	int	i;

	i = 1;
	if (num[0] != '-')
	{
		if (data->plus == 1)
		{
			num[0] = '+';
			data->tdc -= 1;
		}
		else if (data->space == 1)
		{
			num[0] = ' ';
			data->tdc -= 1;
		}
		else
			i--;
	}
	while (num[i] == 0)
	{
		num[i++] = '0';
		if (data->preci <= 0 && data->zero == 1)
		{
			data->tdc -= 1;
			data->size_aff++;
		}
	}
	return (num);
}
