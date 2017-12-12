/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 16:59:19 by cmiron            #+#    #+#             */
/*   Updated: 2016/08/04 10:15:58 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char n)
{
	write(1, &n, 1);
	return (0);
}

void	ft_one(char x, char y, char n)
{
	if (x == '7' && y == '8' && n == '9')
	{
	}
	else
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char x;
	char y;
	char n;

	x = '0';
	while (x <= '7')
	{
		y = x + 1;
		while (y <= '8')
		{
			n = y + 1;
			while (n <= '9')
			{
				ft_putchar(x);
				ft_putchar(y);
				ft_putchar(n);
				ft_one(x, y, n);
				n++;
			}
			y++;
		}
		x++;
	}
}

int		main(void)
{
	ft_print_comb();
	return (0);
}
