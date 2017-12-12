/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 14:33:03 by cmiron            #+#    #+#             */
/*   Updated: 2016/08/20 15:04:01 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all.h"

void	oper(void (**p)(int, int))
{
	p[0] = &plus;
	p[1] = &minus;
	p[2] = &multiply;
	p[3] = &divide;
	p[4] = &modulo;
}

int		main(int argc, char **argv)
{
	char	c[5];
	int		i;
	void	(*p[5])(int, int);

	c[0] = '+';
	c[1] = '-';
	c[2] = '*';
	c[3] = '/';
	c[4] = '%';
	i = -1;
	oper(p);
	if (argc != 4)
		return (0);
	if (argv[2][1] != 0)
	{
		ft_putchar('0');
		return (0);
	}
	while (++i < 5)
		if (c[i] == argv[2][0])
		{
			p[i](ft_atoi(argv[1]), ft_atoi(argv[3]));
			return (0);
		}
	ft_putstr("0\n");
}
