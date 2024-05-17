/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gecarval <gecarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 14:11:13 by gecarval          #+#    #+#             */
/*   Updated: 2024/05/16 20:35:04 by gecarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*destt;
	unsigned char	*srcc;

	i = 0;
	destt = (unsigned char *)dest;
	srcc = (unsigned char *)src;
	while (srcc[i] && i < n)
	{
		destt[i] = srcc[i];
		i++;
	}
	dest = destt;
	return (dest);
}
