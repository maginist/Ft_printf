/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   redirection.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 15:34:30 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/03 11:00:16 by maginist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "fct_tab.h"

void	redirection(t_data *data, va_list ap)
{
	int	i;

	i = 0;
	(void)ap;
	while (i < 15)
	{
		if (g_fct_tab[i].symbol == data->symbol)
		{
			g_fct_tab[i].f(data, ap);
			return ;
		}
		i++;
	}
}
