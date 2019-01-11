/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printdc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 18:37:50 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/11 16:50:38 by maginist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	printdc(int tdc)
{
	while (tdc > 0)
	{
		ft_putchar(' ');
		tdc--;
	}
}
