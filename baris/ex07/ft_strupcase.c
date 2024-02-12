/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyilma <davyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:40:27 by davyilma          #+#    #+#             */
/*   Updated: 2024/02/08 15:41:49 by davyilma         ###   ########.fr       */
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
int main(void)
{
	char p1[] = "349832974978324";
	char p2[] = "fdlkşgldksşgoegor\0";
	char p3[] = "DJFHJHDFGJKHFGDJHK";

	printf("1. Deger: %s\n",p1);
	printf("2. Deger: %s\n\n\n",p2);

	printf("1. Deger: %s\n",ft_strupcase(p1));
	printf("2. Deger: %s\n",ft_strupcase(p2));
	printf("3. Deger: %s\n",ft_strupcase(p3));
}
