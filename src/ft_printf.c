/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 14:53:46 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/12 11:49:24 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	is_valide2(char *s, int i)
{
	while (ft_isdigit(s[i]) || s[i] == '*')
		i++;
	if (s[i] == '.')
		i++;
	while (ft_isdigit(s[i]) || s[i] == '*')
		i++;
	if (s[i] == 'l')
	{
		i++;
		if (s[i] == 'l')
			i++;
	}
	else if (s[i] == 'L')
		i++;
	else if (s[i] == 'h')
	{
		i++;
		if (s[i] == 'h')
			i++;
	}
	return (i);
}

int	is_valide(char *s, int i)
{
	while (ft_strsearch("#+- 0", s[i]))
		i++;
	i = is_valide2(s, i);
	if (ft_strsearch("cspdiouxXbf%", s[i]) && s[i - 1] != 'L')
		return (i);
	else if (s[i] == 'f')
		if (s[i - 1] == 'L' || (s[i - 1] == 'l' && s[i - 2] != 'l'))
			return (i);
	return ((s[i] == '%') ? i : 0);
}

int	ft_printf(const char *format, ...)
{
	va_list ap;
	int		*i;
	int		j;
	int		ret;

	ret = 0;
	if (!(i = (int*)malloc(sizeof(int) * 2)))
			return (0);
	va_start(ap, format);
	i[0] = 0;
	while (format[i[0]])
	{
		j = 0;
		if (format[i[0]] == '%')
		{
			if ((j = is_valide((char*)format, i[0] + 1)))
			{
				i[0] = analyse((char*)format, i, j, ap) + 1;
				ret = ret + i[1];
			}
			else
				i[0]++;
		}
		ft_putchar(format[i[0]]);
		ret++;
		i[0]++;
	}
	va_end(ap);
	free(i);
	return (ret);
}
