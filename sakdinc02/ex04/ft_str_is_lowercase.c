/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyilma <davyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:56:44 by davyilma          #+#    #+#             */
/*   Updated: 2024/02/04 16:47:53 by davyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str)
		if (!('a' <= *str && *str++ <= 'z'))
			return (0);
	return (1);
}

#include <stdio.h>
int	main(void)
{
	printf("%d",ft_str_is_lowercase("Aa"));
}