/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xjose <xjose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 09:48:52 by xjose             #+#    #+#             */
/*   Updated: 2024/05/14 14:01:46 by xjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	length;

	length = ft_strlen(s);
	while (length--)
	{
		if (*(s + length) == c)
			return ((char *)s + length);
	}
	if (c == '\0')
		return ((char *)s);
	return (0);
}
