/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelaine <eelaine@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:49:13 by eelaine           #+#    #+#             */
/*   Updated: 2024/11/25 14:49:16 by eelaine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	char	c;

	if (n >= 10)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(void)
{
	int	n;

	n = 1;
	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
			ft_putstr("fizzbuzz\n");
		else if (n % 3 == 0)
			ft_putstr("fizz\n");
		else if (n % 5 == 0)
			ft_putstr("buzz\n");
		else
		{
			ft_putnbr(n);
			write(1, "\n", 1);
		}
		n++;
	}
	return (0);
}
