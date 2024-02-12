/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyilma <davyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:38:30 by davyilma          #+#    #+#             */
/*   Updated: 2024/02/08 15:34:25 by davyilma         ###   ########.fr       */
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
int main(void)
{
	char p1[] = "sdkjlfjkdsfjklsdjk";
	char p2[] = "copy-paste";
	char p3[] = "\n";

	printf("1. Deger: %s\n",p1);
	printf("2. Deger: %s\n\n\n",p2);

	printf("1. Deger: %d\n",ft_str_is_alpha(p1));
	printf("2. Deger: %d\n",ft_str_is_alpha(p2));
	printf("2. Deger: %d\n",ft_str_is_alpha(p3));
}