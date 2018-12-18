/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 14:53:46 by floblanc          #+#    #+#             */
/*   Updated: 2018/12/18 16:11:32 by maginist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	is_valide(char *s, int i)
{
	while (ft_strsearch("#+- ", i))
		i++;
	while (ft_isdigit(s[i]))
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
	if (ft_strsearch("cspdiouxX", i) && s[i -1] != 'L')
		return (i);
	else if (s[i] == 'f')
		if (s[i - 1] == 'L' || (s[i - 1] == 'l' && s[i - 2] != 'l'))
			return (i);
	return ((s[i] == '%') ? i : 0);
}

int	ft_printf(const char *format, ...)
{
	va_list ap;
	int 	i;
	int		j;
	int		ret;

	ret = 0;
	va_start(ap, format);
	i = 0;
	while (format[i])
	{
		j = 0;
		if (format[i] == '%')
		{
				if ((j = is_valide((char*)format, i + 1)))
					redirection((char*)format, i, j, ap);
				else
					return (ret);
		}
		ft_putchar(format[i]);
		ret++;
		i++;
	}
	va_end(ap);
	return (ret);
}
