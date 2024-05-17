/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gecarval <gecarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 09:57:03 by gecarval          #+#    #+#             */
/*   Updated: 2024/05/17 18:55:52 by gecarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	main(int argc, char *argv[])
{
	char **str = ft_split(argv[1], argv[2][0]);
	if (argc < 2)
		return (0);
	// (void)argv;
	// (void)argc;
	// printf("%d\n", ft_atoi("123"));
	// printf("%s\n", (char *)ft_memset(argv[1], 65, 3));
	// printf("%s\n", (char *)ft_memcpy(argv[1], argv[2], 8));
	// printf("%s\n", (char *)ft_memmove(argv[1], argv[2], ft_atoi(argv[3])));
	// printf("%zu\n", ft_memchr(argv[1], argv[2], ft_atoi(argv[3])));
	// printf("%s\n", ft_strnstr(argv[1], argv[2], ft_atoi(argv[3])));
	// printf("%zu\n", ft_strlcpy(argv[1], argv[2], ft_atoi(argv[3])));
	// printf("%zu\n", strlcpy(argv[1], argv[2], ft_atoi(argv[3])));
	// printf("%zu\n", ft_strlcat(argv[1], argv[2], ft_atoi(argv[3])));
	// printf("%s\n", ft_substr(argv[1], ft_atoi(argv[2]), ft_atoi(argv[3])));
	// printf("%s\n", ft_strdup(argv[7]));
	// printf("%s\n", ft_strjoin(argv[1], argv[2]));
	// printf("%s\n", ft_strtrim(argv[1], argv[2]));
	// printf("%s\n", argv[1]);
	// printf("%zu\n", ft_atoi(argv[1]));
	for (size_t i = 0; i < 5; i++)
	        printf("%s\n", str[i]);
	// ft_putstr_fd(argv[1], ft_atoi(argv[2]));
	return (0);
}
