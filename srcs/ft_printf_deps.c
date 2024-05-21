/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_deps.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gecarval <gecarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:32:55 by gecarval          #+#    #+#             */
/*   Updated: 2024/05/21 19:05:35 by gecarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_printhex_capital(unsigned int nb, int *len)
{
	if (nb > 15)
		ft_printhex_capital(nb / 16, len);
	ft_printchar("0123456789ABCDEF"[nb % 16], len);
}

void	ft_printhex(unsigned int nb, int *len)
{
	if (nb > 15)
		ft_printhex(nb / 16, len);
	ft_printchar("0123456789abcdef"[nb % 16], len);
}

static void	ft_printhexaux(unsigned long long nb, int *len)
{
	if (nb > 15)
		ft_printhexaux(nb / 16, len);
	ft_printchar("0123456789abcdef"[nb % 16], len);
}

void	ft_printpointer(void *pt, int *len)
{
	if (pt == NULL || pt == 0)
	{
		ft_printstr("(nil)", len);
		return ;
	}
	write(1, "0x", 2);
	(*len) += 2;
	ft_printhexaux((unsigned long long)pt, len);
}

void	ft_printunb(unsigned int nb, int *len)
{
	if (nb > 9)
		ft_printnb(nb / 10, len);
	ft_printchar((nb % 10) + 48, len);
}
