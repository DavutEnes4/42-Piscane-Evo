/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyilma <davyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:38:39 by davyilma          #+#    #+#             */
/*   Updated: 2024/02/08 12:47:11 by davyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str)
		if (!('0' <= *str && *str++ <= '9'))
			return (0);
	return (1);
}


#include <stdio.h>

int	main(void)
{
	char p1[]= "12345";
	char p2[] = "Deneme 1 2 3 ";

	{
		printf("1. Değer: %s\n",p1);
		printf("2. Değer: %s\n\n",p2);

		printf("1. Değer: %d\n",ft_str_is_numeric(p1));
		printf("2. Değer: %d\n\n",ft_str_is_numeric(p2));

	}
	
	return(0);
}