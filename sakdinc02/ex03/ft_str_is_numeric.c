/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyilma <davyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:54:44 by davyilma          #+#    #+#             */
/*   Updated: 2024/02/04 16:45:43 by davyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str)
		if (!('0' <= *str && *str++ <= '9'))
			return (0);
	return (1);
}
#include <stdio.h>

int	main(void)
{
	printf("%d",ft_str_is_numeric(""));
}