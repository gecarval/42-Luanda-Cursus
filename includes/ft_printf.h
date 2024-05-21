/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gecarval <gecarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:08:17 by gecarval          #+#    #+#             */
/*   Updated: 2024/05/21 19:19:29 by gecarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

int		ft_printf(const char *str, ...);
void	ft_printchar(char c, int *len);
void	ft_printstr(char *s, int *len);
void	ft_printhex_capital(unsigned int nb, int *len);
void	ft_printhex(unsigned int nb, int *len);
void	ft_printnb(int nb, int *len);
void	ft_printunb(unsigned int nb, int *len);
void	ft_printpointer(void *pt, int *len);

#endif