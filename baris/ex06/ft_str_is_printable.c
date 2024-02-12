/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyilma <davyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:40:11 by davyilma          #+#    #+#             */
/*   Updated: 2024/02/08 15:38:28 by davyilma         ###   ########.fr       */
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
int main(void)
{
	char *p1 = "349832974978324";
	char *p2 = "\n";
	char *p3 = "DJFHJHDFGJKHFGDJHK";

	printf("1. Deger: %s\n",p1);
	printf("2. Deger: %s\n\n\n",p2);

	printf("1. Deger: %d\n",ft_str_is_printable(p1));
	printf("2. Deger: %d\n",ft_str_is_printable(p2));
	printf("2. Deger: %d\n",ft_str_is_printable(p3));
}
