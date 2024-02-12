/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyilma <davyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:39:56 by davyilma          #+#    #+#             */
/*   Updated: 2024/02/08 12:48:43 by davyilma         ###   ########.fr       */
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
	char p1[]= "JHDFSJHKDSJ";
	char p2[] = "assad";

	{
		printf("1. Değer: %s\n",p1);
		printf("2. Değer: %s\n\n",p2);

		printf("1. Değer: %d\n",ft_str_is_lowercase(p1));
		printf("2. Değer: %d\n\n",ft_str_is_lowercase(p2));

	}
	
	return(0);
}