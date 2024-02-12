/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyilma <davyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:07:00 by davyilma          #+#    #+#             */
/*   Updated: 2024/02/06 15:07:09 by davyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int ***nbr)
{
	***nbr = 42;
}

#include <stdio.h>
int main(void){
	int a = 10;
	int *b = &a;
	int **c = &b;
	printf("%d",a);
	ft_ultimate_ft(&c);
	printf("%d",a);
}