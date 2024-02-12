/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyilma <davyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:40:11 by davyilma          #+#    #+#             */
/*   Updated: 2024/02/08 12:52:28 by davyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
		if (!(32 <= *str && *str++ <= 126))
			return (0);
	return (1);
}


#include <stdio.h>

int	main(void)
{
	char p1[]= "JHDFSJHKDSJ \t dfgkhdfhgkdfhjkghjdfkjhg";
	char p2[] = "ass238479 23784 2873  ~~~ ad";

	{
		printf("1. Değer: %s\n",p1);
		printf("2. Değer: %s\n\n",p2);

		printf("1. Değer: %d\n",ft_str_is_printable(p1));
		printf("2. Değer: %d\n\n",ft_str_is_printable(p2));

	}
	
	return(0);
}