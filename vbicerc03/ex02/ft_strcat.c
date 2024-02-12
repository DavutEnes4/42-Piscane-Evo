/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyilma <davyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 20:07:48 by davyilma          #+#    #+#             */
/*   Updated: 2024/02/11 14:28:33 by davyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	x;
	int	y;

	x = 0;
	while (dest[x])
		x++;
	y = 0;
	while (src[y])
		dest[x++] = src[y++];
	dest[x] = '\0';
	return (dest);
}

#include <stdio.h>
int main(void)
{
	char str1[50] = "dsfklsdf";
	char str2[] = "\nadsa Veysel Hoca\nfklsdf";

	printf("%s",ft_strcat(str1,str2));
}
