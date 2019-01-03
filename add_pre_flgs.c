/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_pre_flgs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maginist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/03 15:31:45 by maginist          #+#    #+#             */
/*   Updated: 2019/01/03 15:32:01 by maginist         ###   ########.fr       */
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
