/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyilma <davyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:39:56 by davyilma          #+#    #+#             */
/*   Updated: 2024/02/08 15:35:08 by davyilma         ###   ########.fr       */
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
int main(void)
{
	char p1[] = "349832974978324";
	char p2[] = "copypaste";
	char p3[] = "\n";

	printf("1. Deger: %s\n",p1);
	printf("2. Deger: %s\n\n\n",p2);

	printf("1. Deger: %d\n",ft_str_is_lowercase(p1));
	printf("2. Deger: %d\n",ft_str_is_lowercase(p2));
	printf("2. Deger: %d\n",ft_str_is_lowercase(p3));
}