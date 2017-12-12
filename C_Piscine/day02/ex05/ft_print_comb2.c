/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 19:09:04 by cmiron            #+#    #+#             */
/*   Updated: 2016/08/04 19:53:24 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char z);

void	ft_goal(char x, char y, char z, char w)
{
	while (z <= '9')
	{
		while (w <= '9')
		{
			ft_putchar(x);
			ft_putchar(y);
			ft_putchar(' ');
			ft_putchar(z);
			ft_putchar(w);
			if (x == '9' && y == '8' && z == '9' && w == '9')
			{
			}
			else
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			w++;
		}
		y++;
		w = '0';
	}
}

void	ft_goal2(char x, char y, char z, char w)
{
	while (x <= '9')
	{
		while (y <= '9')
		{
			if (y == '9')
			{
				z = x + 1;
				w = '0';
			}
			else
			{
				z = x;
				w = y + 1;
			}
			ft_goal(x, y, z, w);
			y++;
		}
		x++;
		y = '0';
	}
}

void	ft_print_comb2(void)
{
	char x;
	char y;
	char z;
	char w;

	x = '0';
	y = '0';
	z = '0';
	w = '0';
	ft_goal2(x, y, z, w);
}
