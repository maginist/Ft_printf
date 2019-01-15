/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   redirection.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 15:34:30 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/15 17:54:22 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../include/fct_tab.h"

void	redirection(t_data *data, va_list ap)
{
	int	i;

	i = 0;
	(void)ap;
	if (data->symbol == 'D' || data->symbol == 'O' || data->symbol == 'U')
	{
		data->nb_flgs = 1;
		data->flgs = 'l';
		data->symbol = data->symbol - 'A' + 'a';
	}
	while (g_fct_tab[i].symbol)
	{
		if (g_fct_tab[i].symbol == data->symbol)
		{
			g_fct_tab[i].f(data, ap);
			return ;
		}
		i++;
	}
}
