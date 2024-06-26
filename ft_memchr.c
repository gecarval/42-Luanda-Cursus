/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gecarval <gecarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 20:05:01 by gecarval          #+#    #+#             */
/*   Updated: 2024/05/16 15:23:29 by gecarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	i = -1;
	str = (char *)s;
	while (++i < n)
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)s + i);
	return (NULL);
}
