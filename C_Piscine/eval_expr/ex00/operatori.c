/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operatori.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 14:42:29 by cmiron            #+#    #+#             */
/*   Updated: 2016/08/16 14:43:05 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all.h"

void	plus(int a, int b)
{
	ft_putnbr(a + b);
	ft_putchar('\n');
}

void	minus(int a, int b)
{
	ft_putnbr(a - b);
	ft_putchar('\n');
}

void	multiply(int a, int b)
{
	ft_putnbr(a * b);
	ft_putchar('\n');
}

void	divide(int a, int b)
{
	if (b == 0)
		ft_putstr("Stop : division by zero");
	else
	{
		ft_putnbr(a / b);
		ft_putchar('\n');
	}
}

void	modulo(int a, int b)
{
	if (b == 0)
		ft_putstr("Stop : modulo by zero");
	else
	{
		ft_putnbr(a % b);
		ft_putchar('\n');
	}
}
