/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyilma <davyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:29:08 by davyilma          #+#    #+#             */
/*   Updated: 2024/02/04 16:27:35 by davyilma         ###   ########.fr       */
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

int	main(void)
{
	char *src = "selami";
	char dest[6];

	printf("%s\n",ft_strcpy(dest,src));
	printf("%s",dest);
}