/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stock_flgs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 17:46:48 by floblanc          #+#    #+#             */
/*   Updated: 2018/12/21 18:52:22 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	stock_flgs(t_data *data, char *s, int *i, int j)
{
	while (ft_strsearch("hlL", s[*i]) && *i < j)
	{
		data->nb_flgs += 1;
		data->flgs = s[*i];
		*i += 1;
	}
}
