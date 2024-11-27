/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelaine <eelaine@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:04:08 by eelaine           #+#    #+#             */
/*   Updated: 2024/11/27 12:41:13 by eelaine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac > 1)
	{
		i = 0;
		while (av[++i])
		{
			j = -1;
			while (av[i][++j])
			{
				if ((av[i][j] >= 'a' && av[i][j] <= 'z') && (av[i][j - 1] == ' ' || av[i][j - 1] == '\t' || j == 0))
					av[i][j] -= 32;
				else if ((av[i][j] >= 'A' && av[i][j] <= 'Z') && (av[i][j - 1] != ' ' && av[i][j - 1] != '\t' && j != 0))
					av[i][j] += 32;
				write(1, &av[i][j], 1);
			}
			write(1, "\n", 1);
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
