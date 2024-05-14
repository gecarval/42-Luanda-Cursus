/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xjose <xjose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:08:34 by xjose             #+#    #+#             */
/*   Updated: 2024/05/14 14:15:21 by xjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	c1;
	unsigned int	c2;
	size_t			i;

	i = 0;
	while (s1[i] && (s1[i] == s2[i]) && i < n)
		i++;
	c1 = s1[i];
	c2 = s2[i];
	return (c1 - c2);
}
