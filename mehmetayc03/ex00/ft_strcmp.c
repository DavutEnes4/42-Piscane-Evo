/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyilma <davyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 20:07:37 by davyilma          #+#    #+#             */
/*   Updated: 2024/02/12 12:38:04 by davyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] || s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

#include <stdio.h>

int main(void)
{
	char str1[50] = "Merhaba dunya !";
	char str2[50] = "Merhaba dunya !!";

	printf("%d",ft_strcmp(str1,str2));
}