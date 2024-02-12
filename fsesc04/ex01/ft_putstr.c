/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyilma <davyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:38:21 by davyilma          #+#    #+#             */
/*   Updated: 2024/02/09 19:15:09 by davyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		write (1, &str[i++], 1);
}

#include <stdio.h>
int	main(void)
{
ft_putstr("ldkjfgvkljdflkgjfgklbjfdhjopdfhjkldfhıofg");
}
