/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 15:55:11 by cmiron            #+#    #+#             */
/*   Updated: 2016/08/03 16:58:15 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(int x)
{
	write(1, &x, 1);
	return (0);
}

void	ft_print_numbers(void)
{
	int x;

	x = '0';
	while (x <= '9')
	{
		ft_putchar(x);
		x++;
	}
	ft_putchar('\n');
}

int		main(void)
{
	ft_print_numbers();
	return (0);
}
