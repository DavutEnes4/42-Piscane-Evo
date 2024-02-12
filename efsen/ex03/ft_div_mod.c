/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyilma <davyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:06:51 by davyilma          #+#    #+#             */
/*   Updated: 2024/02/06 15:14:54 by davyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int div, int mod)
{
	if (b != 0)
	{
		div = a / b;
		mod = a % b;
	}
}

#include <stdio.h>
int main(void)
{
	int a = 10;
	int b = 5;
	int mod, div;

	ft_div_mod(a,b,&div,&mod);

	printf("a:%d b:%d bolum:%d mod:%d",a,b,div,mod);
}
