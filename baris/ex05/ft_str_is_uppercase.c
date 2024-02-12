/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyilma <davyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:40:05 by davyilma          #+#    #+#             */
/*   Updated: 2024/02/08 15:35:59 by davyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str)
		if (!('A' <= *str && *str++ <= 'Z'))
			return (0);
	return (1);
}


#include <stdio.h>
int main(void)
{
	char p1[] = "349832974978324";
	char p2[] = "\n";
	char p3[] = "DJFHJHDFGJKHFGDJHK";

	printf("1. Deger: %s\n",p1);
	printf("2. Deger: %s\n\n\n",p2);

	printf("1. Deger: %d\n",ft_str_is_uppercase(p1));
	printf("2. Deger: %d\n",ft_str_is_uppercase(p2));
	printf("2. Deger: %d\n",ft_str_is_uppercase(p3));
}