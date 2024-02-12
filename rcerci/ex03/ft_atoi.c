/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyilma <davyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:01:48 by davyilma          #+#    #+#             */
/*   Updated: 2024/02/08 19:07:36 by davyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	nbr;
	int	sign;

	sign = 1;
	nbr = 0;
	while (*str && ((*str >= 9 && *str <= 13) || *str == 32))
		str++;
	while (*str == 43 || *str == 45)
		if (*str++ == 45)
			sign *= -1;
	while (*str && (*str >= 48 && *str <= 57))
		nbr = nbr * 10 + *str++ - 48;
	return (sign * nbr);
}

#include <stdio.h>
int main(void)
{
	printf("%d \n%d \n",ft_atoi("		    ---+--+1234ab567"),ft_atoi("---+--+1			2     3------4ab567"));
}
