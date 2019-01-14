/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   redirection.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 15:34:30 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/14 12:24:11 by maginist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../include/fct_tab.h"

void	redirection(t_data *data, va_list ap)
{
	int	i;

	i = 0;
	(void)ap;
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
