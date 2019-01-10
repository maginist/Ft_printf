/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct_tab.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/27 12:59:20 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/10 11:00:43 by maginist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FCT_TAB_H
# define FCT_TAB_H
# include "ft_printf.h"

t_fct	g_fct_tab[] = {
	{'c', &gest_c},
	{'s', &gest_s},
	{'p', &gest_p},
	{'d', &gest_di},
	{'i', &gest_di},
	{'o', &gest_o},
	{'u', &gest_u},
	{'x', &gest_x},
	{'X', &gest_majx},
	{'b', &gest_b},
	{'%', &gest_pc},
	{'f', &gest_f},/*
	{'e', &gest_e},
	{'g', &gest_g}, \
	{'r', &gest_r}, \
	{'k', &gest_k}*/};

#endif
