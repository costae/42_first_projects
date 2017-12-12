/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dprovorn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 06:02:58 by dprovorn          #+#    #+#             */
/*   Updated: 2016/08/06 06:46:52 by dprovorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_modul(int x, int y)
{
	if (x >= y)
		return (x - y);
	else
		return (y - x);
}

void	ft_print(int count, int *hist)
{
	int a;
	int b;

	a = 0;
	while (a < count)
	{
		b = 0;
		while (b < count)
		{
			if (b == hist[i])
				ft_putchar(j + 48 + 1);
			b++;
		}
		a++;
	}
	ft_putchar('\n');
}

void	ft_sol(int n, int col, int *hist)
{
	int i;
	int j;

	if (col == n)
	{
		ft_print(n, hist);
	}
	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < col && !(hist[j] == i || ft_modul(hist[j], i) == col - j))
			j++;
		if (j < col)
		{
			i++;
			continue;
		}
		hist[col] = i;
		ft_sol(n, col + 1, hist);
		i++;
	}
}

void	ft_eight_queens_puzzle_2(void)
{
	int hist[8];

	ft_sol(8, 0, hist);
}
