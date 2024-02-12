/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyilma <davyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 20:07:52 by davyilma          #+#    #+#             */
/*   Updated: 2024/02/12 12:21:57 by davyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	x;
	unsigned int	y;

	x = 0;
	y = 0;
	while (dest[x])
		x++;
	while (y < nb && src[y] != '\0')
	{
		dest[x + y] = src [y];
		y++;
	}
	dest[x + y] = '\0';
	return (dest);
}

#include <stdio.h>
int	main(void)
{
	char str1[50] = "MERHABA";
	char str2[50] = "ME1RHAB1A";

	printf("%s\n",ft_strncat(str1,str2,3));
}
