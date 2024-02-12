/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyilma <davyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:38:30 by davyilma          #+#    #+#             */
/*   Updated: 2024/02/08 12:46:01 by davyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!(('A' <= *str && *str <= 'Z') || ('a' <= *str && *str <= 'z')))
			return (0);
		str++;
	}
	return (1);
}


#include <stdio.h>

int	main(void)
{
	char p1[]= "ilyasAltintasBesiktas";
	char p2[] = "Deneme 1 2 3 ";

	{
		printf("1. Değer: %s\n",p1);
		printf("2. Değer: %s\n\n",p2);

		printf("1. Değer: %d\n",ft_str_is_alpha(p1));
		printf("2. Değer: %d\n\n",ft_str_is_alpha(p2));

	}
	
	return(0);
}
