/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printpreci.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maginist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 13:06:00 by maginist          #+#    #+#             */
/*   Updated: 2019/01/17 13:08:08 by maginist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	printpreci(int size)
{
	int		i;
	char	str[size];

	i = 0;
	str[size] = '\0';
	while (i < size)
		str[i++] = '0';
	write(1, str, size);
}
