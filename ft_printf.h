/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maginist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 13:37:06 by maginist          #+#    #+#             */
/*   Updated: 2018/12/18 16:15:20 by maginist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "libft/libft.h"

void	putnbr_bllong(unsigned long long n, char *base);
void	putnbr_blong(unsigned long n, char *base);
void	putnbr_bshort(unsigned short n, char *base);
int		ft_printf(const char *format, ...);
void	redirection(char *s, int i, int j, va_list ap);

#endif
