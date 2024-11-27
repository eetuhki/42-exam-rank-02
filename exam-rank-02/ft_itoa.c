/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelaine <eelaine@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:54:39 by eelaine           #+#    #+#             */
/*   Updated: 2024/11/27 15:14:27 by eelaine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	num_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	int		len;
	char	*res;

	len = num_len(nbr);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (nbr < 0)
	{
		res[0] = '-';
		nbr = -nbr;
	}
	if (nbr == 0)
		res[0] = '0';
	while (nbr)
	{
		res[--len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (res);
}

/* #include <stdio.h>

int	main()
{
	int		n;
	char	*res;

	n = -838320;
	res = ft_itoa(n);
	printf("res: %s\n", res);
	free(res);
	return (0);
}
 */