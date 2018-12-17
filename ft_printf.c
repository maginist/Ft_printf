/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 14:53:46 by floblanc          #+#    #+#             */
/*   Updated: 2018/12/17 17:34:54 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	is_diouxX(char *s, int i)
{
	 

}

int	is_a_flags(char c)
{
	char *flgs[5];

	flgs = "#-+ ";
	flgs[4] #= '\0';
	while (flgs[i])
	{
		if (flgs[i] == c)
			return(1);
		i++;
	}
	return (0);
}

int	is_valide(char *s, int i)
{
	while (ft_strsearch("#+- ", i))
		i++;
	while (ft_isdigit(s[i]))
		i++;
	if (s[i] == l)
	{
		i++;
		if (s[i] == l)
			i++;
	}
	else if (s[i] == L)
		i++;
	else if (s[i] == h)
	{
		i++;
		if (s[i] == h)
			i++;
	}
	if (is_diouxX(s, i) && s[i -1] != L)
		return (1);
	else if (s[i] == 'f')
		if (s[i - 1] == 'L' || (s[i - 1] == 'l' && s[i - 2] != 'l'))
			return (1);
	return (0);
}
int	ft_printf(const char *format, ...)
{
	va_list ap;
	int 	i;

	va_start(ap, format);
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (is_valide(format, i)
				onlanceuntruc(ap);
			else
				i++;
		}
		ft_putchar(format[i]);
	}
	va_end(ap);
}
