/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyilma <davyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:38:39 by davyilma          #+#    #+#             */
/*   Updated: 2024/02/08 15:34:43 by davyilma         ###   ########.fr       */
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
int main(void)
{
	char p1[] = "349832974978324";
	char p2[] = "copy-paste";
	char p3[] = "\n";

	printf("1. Deger: %s\n",p1);
	printf("2. Deger: %s\n\n\n",p2);

	printf("1. Deger: %d\n",ft_str_is_numeric(p1));
	printf("2. Deger: %d\n",ft_str_is_numeric(p2));
	printf("2. Deger: %d\n",ft_str_is_numeric(p3));
}