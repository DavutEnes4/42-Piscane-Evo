/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyilma <davyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:37:15 by davyilma          #+#    #+#             */
/*   Updated: 2024/02/09 11:38:49 by davyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign *= -1;
	while (*str >= '0' && *str <= '9')
		res = res * 10 + *str++ - 48;
	return (sign * res);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n",ft_atoi("   ++--+---23em43r"));
	printf("%d\n",ft_atoi(" 	---+--+1234ab567"));
	printf("%d\n",ft_atoi(" 	+++++++++++++++++++++++++++1234ab567"));
}
