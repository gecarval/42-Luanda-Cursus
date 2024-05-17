/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gecarval <gecarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:01:04 by gecarval          #+#    #+#             */
/*   Updated: 2024/05/17 19:28:17 by gecarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_cleanstr(char const *s, char c)
{
	size_t	start;
	size_t	len;
	char	*str;

	start = 0;
	len = ft_strlen(s);
	while (s[start] == c)
		start++;
	while (s[len] == c)
		len--;
	str = (char *)malloc(sizeof(char) * len - start + 1);
	str[len - start] = '\0';
	str = ft_substr(s, start, len);
	return (str);
}

static size_t	ft_memstr(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] != c && i == 0)
			k++;
		if (s[i + 1] && s[i] != c && s[i + 1] == c)
			k++;
		i++;
	}
	return (k);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	start;
	size_t	len;
	size_t	i;
	char	*strlimpa;

	i = 0;
	len = 0;
	start = 0;
	strlimpa = ft_cleanstr(s, c);
	printf("%zu", ft_memstr(strlimpa, c));
	if (!s)
		return (NULL);
	str = (char **)malloc(sizeof(char) * ft_memstr(strlimpa, c));
	while (s[start])
	{
		if (s[start] == c)
		{
			str[i] = (char *)malloc(sizeof(char) * len + 1);
			str[i][len] = '\0';
			str[i] = ft_substr(s, start - len, len);
			len = 0;
			i++;
		}
		start++;
		len++;
	}
	return (str);
}
