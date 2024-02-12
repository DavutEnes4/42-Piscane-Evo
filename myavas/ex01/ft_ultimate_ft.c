/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyilma <davyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:07:00 by davyilma          #+#    #+#             */
/*   Updated: 2024/02/06 17:13:08 by davyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int **nbr)
{
	**nbr = 42;
}

#include <stdio.h>
int main()
{
	int a;
	int *b = &a;
	int **c = &b;
	//printf("ilk deger:%d\n",a);
	ft_ultimate_ft(c);
	printf("ikincij deger:%d\n",a);
	
}