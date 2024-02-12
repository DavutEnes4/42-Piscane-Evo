/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyilma <davyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 12:55:02 by davyilma          #+#    #+#             */
/*   Updated: 2024/02/04 17:16:55 by davyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		str[i] += ('A' <= str[i] && str[i] <= 'Z') * 32;
	return (str);
}

#include <stdio.h>

int main()
{
	char a[] = "HJSKDFH1312737hdsfhgsdghf73274663274JKSDFHJKSDHJKFHJK";
	
	printf("%s\n", ft_strlowcase(a));
	return (0);
} 