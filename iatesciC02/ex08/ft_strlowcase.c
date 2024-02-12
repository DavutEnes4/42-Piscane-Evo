/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyilma <davyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:40:39 by davyilma          #+#    #+#             */
/*   Updated: 2024/02/08 12:56:14 by davyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		str[i] += ('A' <= str[i] && str[i] <= 'Z') * 32;
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

		printf("1. Değer: %s\n",ft_strlowcase(p1));
		printf("2. Değer: %s\n\n",ft_strlowcase(p2));

	}
	
	return(0);
}