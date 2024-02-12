/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyilma <davyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 20:07:59 by davyilma          #+#    #+#             */
/*   Updated: 2024/02/12 12:29:38 by davyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	if (to_find[y] == '\0' )
		return (str);
	while (str[x])
	{
		while (str[x + y] == to_find[y] && str[x + y])
			y++;
		if (to_find[y] == '\0')
			return (&str[x]);
		x++;
		y = 0;
	}
	return (0);
}

#include <stdio.h>
int	main(void)
{
	char str1[50] = "MERHABA";
	char str2[50] = "E";

	printf("%s\n",ft_strstr(str1,str2));
}


mehmet erkus davuda evo yapıyor
    13		 15
  2
davud