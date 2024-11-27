/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelaine <eelaine@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:07:29 by eelaine           #+#    #+#             */
/*   Updated: 2024/11/27 12:51:29 by eelaine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, unsigned int len)
{
	int	n;

	if (!tab || len == 0)
		return (0);
	n = tab[0];
	while (len-- > 0)
	{
		if (n < tab[len])
			n = tab[len];
	}
	return (n);
}

/* #include <stdio.h>

int	main()
{
	int tab[] = {11, -1, 4, -4, 4, 67, -68, 30};

	printf("max: %d\n", max(tab, 8));
	return (0);
} */
