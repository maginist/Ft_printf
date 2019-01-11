/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gest_f.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maginist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 10:58:17 by maginist          #+#    #+#             */
/*   Updated: 2019/01/10 11:41:10 by maginist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static char	*ajust_num(char *num, t_data *data, int i)
{
	char	*tmp;

	tmp = num;
	if (!(num = (char*)malloc(sizeof(char)	* (data->size_aff + 1))))
		return(0);
	if (tmp[0] != '-')
	{
		if (data->plus == 1)
		{
			num[0] = '+';
			i = 1;
		}
		else if (data->space == 1)
		{
			num[0] = ' ';
			i = 1;
		}
	}
	ft_strncpy(num + i, tmp, (size_t)(data->size_aff - i));
	i = ft_strlen(num);
	while (i < data->size_aff)
		num[i++] = '0';
	free(tmp);
	return (num);
}

void		gest_f(t_data *data, va_list ap)
{
	char    *num;
	int		i;

	i = 0;
	if (data->nb_flgs == 0 || (data->nb_flgs == 1 && data->flgs == 'l'))
		num = ftoa(va_arg(ap, double));
	else
		num = fltoa(va_arg(ap, long double));
	if (data->preci == -1)
		data->preci = 6;
	while (num[i] != '.' && num[i] != '\0')
	{
		data->size_aff += 1;
		i++;
	}
	if (data->preci > 0)
		data->size_aff += data->preci + 1;
	if ((data->plus == 1 || data->space == 1) && num[0] != '-')
		data->size_aff += 1;
	data->tdc -= data->size_aff;
	num = ajust_num(num, data, 0);
	gest_allnum(num, data);
}
