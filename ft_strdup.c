/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gecarval <gecarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:19:12 by gecarval          #+#    #+#             */
/*   Updated: 2024/05/16 19:35:29 by gecarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;

	str = (char *)malloc(sizeof(char *) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s, ft_strlen(s) + 1);
	return (str);
}
