/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_pre_flgs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 17:23:52 by floblanc          #+#    #+#             */
/*   Updated: 2018/12/21 18:27:45 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	add_pre_flgs(t_data *data, char *s, int *i, int j)
{
	while (ft_strsearch("#+- 0)", s[*i]) && *i < j)
	{
		if (s[*i] == '#')
			data->diez = 1;
		else if (s[*i] == '+')
			data->plus = 1;
		else if (s[*i] == '-')
			data->moins = 1;
		else if (s[*i] == ' ')
			data->space = 1;
		else if (s[*i] == '0')
			data->zero = 1;
		*i = *i + 1;
	}
}
