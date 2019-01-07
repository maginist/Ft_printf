/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 11:37:56 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/07 18:29:44 by maginist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	ft_size(double n)
{
	int	i;
	double	nb;

	i = 0;
	if (n == 0 || n < 0)
		i = 1;
	if (n < 0)
		n = -n;
	nb = n - (double)((int)n);
	while ((int)n > 0)
	{
		n /= 10;
		i++;
	}
	printf("before '.' : %d\n", i);
	if (nb > 0.0000009)
		i++;
	printf("after point i = %i and nb = %f\n", i, nb);
	while (nb > 0.0000009)
	{
		printf("nb = %i\n", (int)(nb * 10)); //mdr je comprend pas x)
		nb = (nb * 10) - ((int)(nb * 10));
		i++;
	}
	printf("size : %i\n", i);
	return (i);
}

char			*ftoa(double n)
{
	int	i;
	double	nb;
	char		*str;

	i = ft_size(n);
	if (!(str = ft_strnew(i)))
		return (0);
	if (n < 0)
	{
		n = -n;
		str[0] = '-';
	}
	nb = n - ((int)n);
	str[i--] = '\0';
	while (str[i] == 0)
	{
		if (nb <= 0.0000009)
		{
			str[i--] = ((int)n % 10) + '0';
			n /= 10;
		}
		else
		{
			str[i--] = (int)(nb * 10) + '0';//incorrect ca ecrit le num a l'envers
			nb = (nb * 10) - ((int)(nb * 10));
			if (nb <= 0.0000009)
				str[i--] = '.';
		}
	}
	return (str);
}

int	main()
{
	double	f;

	f = 23.512;
	ft_putstr(ftoa(f));
	return (0);
}
