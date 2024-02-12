/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyilma <davyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 20:12:20 by davyilma          #+#    #+#             */
/*   Updated: 2024/02/11 14:16:21 by davyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 1;
	if (nb == 1)
		return (1);
	while (sqrt <= 46340 && sqrt * sqrt <= nb)
	{
		if (sqrt * sqrt == nb)
			return (sqrt);
		sqrt++;
	}
	return (0);
}

#include <stdio.h>
int main(void)
{
	printf("%d\n",ft_sqrt(9));
	printf("%d\n",ft_sqrt(2));
	printf("%d\n",ft_sqrt(1));
	printf("%d\n",ft_sqrt(4));
	printf("%d\n",ft_sqrt(3));
}
