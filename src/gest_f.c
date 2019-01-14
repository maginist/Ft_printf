/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gest_f.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maginist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 10:58:17 by maginist          #+#    #+#             */
/*   Updated: 2019/01/14 10:11:32 by maginist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static void		arrondi(char *num, char *tmp, int size, int check)
{
	static int	retenue;
	int		i;
	char	*tmp2;

	if ((int)ft_strlen(num) < size)
		return ;
	if (!(retenue))
		retenue = 0;
	if (tmp[check] == '.')
		check++;
	i = check - 1;
	if (num[0] == '+' || num[0] == ' ')
		i++;
	if (i > 0 && num[i] == '.')
		i--;
	if ((check == size && tmp[check] >= '5' && tmp[check] <= '9') 
		|| (i >= 0 && ft_isdigit(num[i]) && retenue == 1))
	{
		if (num[i] < '9')
			num[i] += 1;
		else
		{
			num[i] = '0';
			retenue = 1;
			arrondi(num, tmp, size, i);
		}
	}
	else if (retenue == 1)
	{
		if (!(tmp = (char*)malloc(sizeof(char) * (size + 2))))
			return ;
		ft_strcpy(tmp + 1, num);
		tmp[0] = 1;
		tmp2 = tmp;
		tmp = num;
		num = tmp2;
		free(tmp);
	}
}

static char		*ajust_num(char *num, t_data *data, int i)
{
	char	*tmp;

	tmp = num;
	if (!(num = (char*)malloc(sizeof(char) * (data->size_aff + 1))))
		return (0);
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
	ft_strncpy(num + i, tmp, (size_t)(data->size_aff));
	i = ft_strlen(num);
	arrondi(num, tmp, data->size_aff, i);
	while (i < data->size_aff)
		num[i++] = '0';
	free(tmp);
	return (num);
}

void		gest_f(t_data *data, va_list ap)
{
	char	*num;
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
