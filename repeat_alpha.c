/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelaine <eelaine@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:51:04 by eelaine           #+#    #+#             */
/*   Updated: 2024/11/25 14:51:06 by eelaine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int i;
	int	j;

	i = -1;
	j = 0;
	if (ac != 2)
		write(1, "\n", 1);
	else
	{
		while (av[1][++i] != '\0')
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				j = av[1][i] - 96;
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				j = av[1][i] - 64;
			else
				write(1, &av[1][i], 1);
			if (j)
			{
				while (j-- >= 1)
					write(1, &av[1][i], 1);
			}
		}
		write(1, "\n", 1);
	}
	return (0);
}
