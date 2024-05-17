/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gecarval <gecarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 19:07:38 by gecarval          #+#    #+#             */
/*   Updated: 2024/05/17 10:09:58 by gecarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * len);
	if (!str || !s)
		return (NULL);
	str[len] = '\0';
	while (s[start + len] && len--)
		str[len] = s[start + len];
	return (str);
}
