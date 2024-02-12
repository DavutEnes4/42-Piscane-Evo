/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyilma <davyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:59:17 by davyilma          #+#    #+#             */
/*   Updated: 2024/02/08 18:52:59 by davyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

#include <stdio.h>
int	main(void)
{
	ft_putstr("0\t1\t2\t3\t4\t5\t6\t7\t8\t9\n10\t11\t12\t13\t14\t15\t16\t17\t18\t19\n20\t21\t22\t23\t24\t25\t26\t27\t28\t29");
}
