/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyilma <davyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 20:07:48 by davyilma          #+#    #+#             */
/*   Updated: 2024/02/12 12:21:24 by davyilma         ###   ########.fr       */
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
int	main(void)
{
	char str1[50] = "MERHABA";
	char str2[50] = "ME1RHAB1A";

	printf("%s\n",ft_strcat(str1,str2));
}
