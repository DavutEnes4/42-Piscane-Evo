/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyilma <davyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 12:40:45 by davyilma          #+#    #+#             */
/*   Updated: 2024/02/04 17:15:49 by davyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		str[i] -= ('a' <= str[i] && str[i] <= 'z') * 32;
	return (str);
}

int	main(void)
{
	char a[] = "fhjdhfjhfjhfkjdsf";
	
	printf("%s\n", ft_strupcase(a));
	return (0);
} 
