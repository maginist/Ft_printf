/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stock_digit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 17:37:44 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/17 14:44:41 by maginist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	stock_digit(char *s, int *i, int j, va_list ap)
{
	int res;

	res = 0;
	if (ft_isdigit(s[*i]))
	{
		while (ft_isdigit(s[*i]) && *i < j)
		{
			res = (res * 10) + (s[*i] - '0');
			*i = *i + 1;
		}
		while (s[*i] == '*')
			(*i)++;
		if (s[*i - 1] == '*')
			return (0);
	}
	else if (s[*i] == '*')
	{
		res = va_arg(ap, int);
		*i = *i + 1;
		if (ft_isdigit(s[*i]))
			res = stock_digit(s, i, j, ap);
	}
	return (res);
}
