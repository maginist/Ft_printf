/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maginist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 13:37:06 by maginist          #+#    #+#             */
/*   Updated: 2019/01/17 13:09:22 by maginist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "../libft/libft.h"
# include <stdio.h>

char			*lltoa(long long int n);
char			*ltoa(long int n);
char			*stoa(short int n);
char			*ulltoa(unsigned long long int n);
char			*ultoa(unsigned long int n);
char			*utoa(unsigned int n);
char			*ustoa(unsigned short int n);
char			*bulltoa(unsigned long long n, char *base);
char			*bultoa(unsigned long n, char *base);
char			*butoa(unsigned int n, char *base);
char			*bustoa(unsigned short n, char *base);
char			*buctoa(unsigned char n, char *base);
char			*ftoa(double n);
char			*fltoa(long double n);
char			*ctoa(char n);
char			*uctoa(unsigned char n);
void			putnbr_blong(unsigned long n, char *base);
int				ft_printf(const char *format, ...);
int				analyse(char *s, int *i, int j, va_list ap);

typedef struct	s_data
{
	int			diez;
	int			space;
	int			plus;
	int			moins;
	int			zero;
	int			tdc;
	int			pt;
	int			preci;
	int			nb_flgs;
	int			size_aff;
	char		flgs;
	char		symbol;
	char		*s;
}				t_data;

void			gest_c(t_data *data, va_list ap);
void			gest_s(t_data *data, va_list ap);
void			gest_p(t_data *data, va_list ap);
void			gest_di(t_data *data, va_list ap);
void			gest_o(t_data *data, va_list ap);
void			gest_u(t_data *data, va_list ap);
void			gest_x(t_data *data, va_list ap);
void			gest_majx(t_data *data, va_list ap);
void			gest_f(t_data *data, va_list ap);
void			gest_e(t_data *data, va_list ap);
void			gest_g(t_data *data, va_list ap);
void			gest_b(t_data *data, va_list ap);
void			gest_r(t_data *data, va_list ap);
void			gest_pc(t_data *data, va_list ap);

typedef	struct	s_fct
{
	char		symbol;
	void		(*f)(t_data *data, va_list ap);
}				t_fct;

void			init_struct(t_data *data, char *s, int pos_sym);
void			add_pre_flgs(t_data *data, char *s, int *i, int j);
int				stock_digit(char *s, int *i, int j, va_list ap);
void			stock_flgs(t_data *data, char *s, int *i, int j);
void			redirection(t_data *data, va_list ap);
void			printdc(int tdc);
char			*newstart_cleanbegin(char *num, int size, t_data *data);
char			*fillbegin(char *num, t_data *data);
void			gest_allnum(char *num, t_data *data);
void			printpreci(int size);

#endif
