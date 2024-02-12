/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyilma <davyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:51:59 by davyilma          #+#    #+#             */
/*   Updated: 2024/02/04 16:32:56 by davyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = -1;
	while (src[++i] && i < n)
		dest[i] = src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char *src = "selami";
	char dest[5];

	printf("%s\n",ft_strncpy(dest,src,5));
	printf("%s",dest);
}