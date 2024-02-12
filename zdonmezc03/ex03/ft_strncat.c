/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyilma <davyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 20:07:52 by davyilma          #+#    #+#             */
/*   Updated: 2024/02/11 15:44:54 by davyilma         ###   ########.fr       */
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
		dest[x + y] = src [y++];
	dest[x + y] = '\0';
	return (dest);
}

#include <stdio.h>
int	main(void)
{
	char str1[50] = "Devam";
	char str2[50] = "Devam";

	printf("%s\n%s\n%s\n",ft_strncat(str1,str2,2),ft_strncat(str2,"str1",6),ft_strncat(str2,"Leg",2));
}
