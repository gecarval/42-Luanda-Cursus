/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xjose <xjose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:34:08 by xjose             #+#    #+#             */
/*   Updated: 2024/05/15 15:28:45 by xjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while ((char *)s1 && (*((char *)s1 + i) == *((char *)s2 + i)) && i < n)
		i++;
	return (*((unsigned char *)s1 + i) - *((unsigned char *)s2 + i));
}
