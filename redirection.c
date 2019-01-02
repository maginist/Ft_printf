/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   redirection.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 15:34:30 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/01 18:28:09 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "fct_tab.h"

void	redirection(t_data *data, va_list ap)
{
//	printf("diez : %d\nspace : %d\nplus : %d\nmoins : %d\nzero : %d\ntdc : %d\npreci : %d\nnb_flgs : %d\nflgs : %c\nsymbol : %c\n", data->diez, data->space, data->plus, data->moins, data->zero, data->tdc, data->preci, data->nb_flgs, data->flgs, data->symbol);
	int	i;

	i = 0;
	(void)ap;
	while (i < 15)
	{
		if (fct_tab[i].symbol == data->symbol)
		{
			fct_tab[i].f(data, ap);
			return ;
		}
		i++;
	}
}
