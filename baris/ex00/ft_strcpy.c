/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyilma <davyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:38:11 by davyilma          #+#    #+#             */
/*   Updated: 2024/02/08 15:31:14 by davyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	return (dest[i] = '\0', dest);
}

#include <stdio.h>
int main(void)
{
	char p1[] = "sdkjlfjkdsfjklsdjk";
	char p2[] = "copy-paste";

	printf("1. Deger: %s\n",p1);
	printf("2. Deger: %s\n\n\n",p2);
	
	ft_strcpy(p1,p2);
	printf("1. Deger: %s\n",p1);
	printf("2. Deger: %s\n",p2);
}