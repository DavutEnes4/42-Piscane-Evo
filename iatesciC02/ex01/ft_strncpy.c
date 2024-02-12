/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyilma <davyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:38:20 by davyilma          #+#    #+#             */
/*   Updated: 2024/02/08 12:42:54 by davyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char p1[]= "İlyas Altıntaş Beşiktaş <3";
	char p2[] = "Deneme 1 2 3 ";

	{
		printf("1. Değer: %s\n",p1);
		printf("2. Değer: %s\n\n",p2);

		ft_strncpy(p1,p2,14);

		printf("1. Değer: %s\n",p1);
		printf("2. Değer: %s\n\n",p2);

	}
	
	return(0);
}
