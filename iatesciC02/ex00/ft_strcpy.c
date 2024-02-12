/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyilma <davyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:38:11 by davyilma          #+#    #+#             */
/*   Updated: 2024/02/08 12:37:25 by davyilma         ###   ########.fr       */
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

int	main(int size, char **args)
{
	char *p1 = args[1];
	char *p2 = args[2];

	if(size > 2)
	{
		printf("1. Değer: %s\n",p1);
		printf("2. Değer: %s\n",p2);

		ft_strcpy(p1,p2);
		
		printf("1. Değer: %s\n",p1);
		printf("2. Değer: %s\n",p2);

	}
	return(0);
}
