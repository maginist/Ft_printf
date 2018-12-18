/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   redirection.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maginist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 15:26:07 by maginist          #+#    #+#             */
/*   Updated: 2018/12/18 17:34:26 by maginist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	redirection(char *s, int i, int j, va_list ap)
{
	int moins;
	int spaces;
	int size;

	moins = 0;
	spaces = 0;
	while (i < j)
	{
		if (s[i] == '-')
			moins = 1;
		if (ft_isdigit(s[i]))
			spaces = (spaces * 10) + (s[i] + '0');
		i++;
	}
	size = redirection2(s, ap, i, moins);
	}
