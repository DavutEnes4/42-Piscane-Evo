/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyilma <davyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:38:25 by davyilma          #+#    #+#             */
/*   Updated: 2024/02/09 19:04:53 by davyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i++]);

	return (i);
}

#include <stdio.h>
int	main(void)
{
	printf("%d\n",ft_strlen("wenkdfckndfjn"));
}
