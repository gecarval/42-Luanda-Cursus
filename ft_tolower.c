/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsilv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 10:53:36 by marcsilv          #+#    #+#             */
/*   Updated: 2024/05/14 10:56:41 by marcsilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c);

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	else
		return (0);
}
