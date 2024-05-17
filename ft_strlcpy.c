/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gecarval <gecarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 09:58:46 by gecarval          #+#    #+#             */
/*   Updated: 2024/05/15 18:08:08 by gecarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	count;

	count = ft_strlen(src);
	if (size < 1)
		return (count);
	i = 0;
	while (*src && i < size)
	{
		*((unsigned char *)dst + i) = *((unsigned char *)src + i);
		i++;
	}
	*((unsigned char *)dst + (i - 1)) = '\0';
	return (count);
}
