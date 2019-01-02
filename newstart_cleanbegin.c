/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newstart_cleanbegin.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/28 23:32:09 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/02 14:45:36 by maginist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*newstart_cleanbegin(char *num, int size, t_data *data)
{
	char	*tmp;
	int		numax;
	int		i;

	if (data->tdc > 0 && data->zero == 1 && data->preci <= 0
		&& data->moins == 0)
		size += data->tdc;
	if (!(tmp = (char*)malloc(sizeof(char) * (size + 1))))
		return (0);
	numax = ft_strlen(num);
	i = 0;
	while (numax - i >= 0 && num[numax - i] != '-')
	{
		tmp[size - i] = num[numax - i];
		i++;
	}
	while (size - i >= 0)
		tmp[size - i++] = '\0';
	if (num[0] == '-')
		tmp[0] = '-';
	free(num);
	return (tmp);
}
