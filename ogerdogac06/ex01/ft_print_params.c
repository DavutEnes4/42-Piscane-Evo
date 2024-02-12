/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyilma <davyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 14:34:46 by davyilma          #+#    #+#             */
/*   Updated: 2024/02/12 17:14:26 by davyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int size, char **args)
{
	int	i;
	int	j;

	i = 1;
	while (i < size)
	{
		j = 0;
		while (args[i][j])
			write(1, &args[i][j++], 1);
		write(1, "\n", 1);
		i++;
	}
}
