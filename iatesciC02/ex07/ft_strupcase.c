/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyilma <davyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:40:27 by davyilma          #+#    #+#             */
/*   Updated: 2024/02/08 12:54:43 by davyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		str[i] -= ('a' <= str[i] && str[i] <= 'z') * 32;
	return (str);
}


#include <stdio.h>

int	main(void)
{
	char p1[]= "JHDFSJHKDSJ \t dfgkhdfhgkdfhjkghjdfkjhg";
	char p2[] = "ass238479 23784 2873  ~~~ ad";

	{
		printf("1. Değer: %s\n",p1);
		printf("2. Değer: %s\n\n",p2);

		printf("1. Değer: %s\n",ft_strupcase(p1));
		printf("2. Değer: %s\n\n",ft_strupcase(p2));

	}
	
	return(0);
}