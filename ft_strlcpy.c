/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xjose <xjose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:14:09 by xjose             #+#    #+#             */
/*   Updated: 2024/05/14 17:08:17 by xjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	count;
	size_t	i;

	count = ft_strlen(src);
	if (size < 1)
		return (count);
	i = -1;
	while (*src && ++i < size)
		*((unsigned char *)dst + i) = *((unsigned char *)src + i);
	*((unsigned char *)dst + (i - 1)) = '\0';
	return (count);
}
