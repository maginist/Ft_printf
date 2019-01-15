/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 14:53:46 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/15 18:33:03 by maginist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int		is_valide2(char *s, int i)
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
	else if (s[i] == 'L' || s[i] == 'j' || s[i] == 'z')
		i++;
	else if (s[i] == 'h')
	{
		i++;
		if (s[i] == 'h')
			i++;
	}
	return (i);
}

int		is_valide(char *s, int i)
{
	while (ft_strsearch("#+- 0", s[i]))
		i++;
	i = is_valide2(s, i);
	if (ft_strsearch("cspdiouxXbfrDOU%", s[i]) && s[i - 1] != 'L')
		return (i);
	else if (s[i] == 'f')
		if (s[i - 1] == 'L' || (s[i - 1] == 'l' && s[i - 2] != 'l'))
			return (i);
	return ((s[i] == '%') ? i : 0);
}

void	ft_printf2(const char *format, int *i, int j, va_list ap)
{
	if (format[i[0]] == '%')
	{
		if ((j = is_valide((char*)format, i[0] + 1)))
		{
			i[0] = analyse((char*)format, i, j, ap) + 1;
			i[2] = i[2] + i[1];
		}
		else
			i[0]++;
	}
	else
	{
		write(1, &format[i[0]], 1);
		i[2]++;
		i[0]++;
	}
}

int		ft_printf(const char *format, ...)
{
	va_list ap;
	int		*i;
	int		j;

	if (!(i = (int*)malloc(sizeof(int) * 3)))
		return (0);
	va_start(ap, format);
	i[0] = 0;
	i[2] = 0;
	while (i[0] < (int)ft_strlen(format))
	{
		j = 0;
		ft_printf2(format, i, j, ap);
	}
	va_end(ap);
	free(i);
	return (i[2]);
}
