/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 12:34:21 by cmiron            #+#    #+#             */
/*   Updated: 2016/08/07 12:43:44 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char t[1000][1000];
int i = 0;
int j;

void	print(char t[1000][1000], int y, int x)
{
	int i;
	int j;
	
	i = 0;
	while (i < x)
	{
		j = 0;
		while (j < y)
		{
			ft_putchar(t[i][j];
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}

void	colle_aux(int x, int y)
{
	i = 0;
	while (i < j)
	{
		t[i][0] = 'B';
		t[i][x - ] = 'B';
		i++;
	}
	t[y - 1][x -1] = 'C';
	t[y - 1][0] = 'C';
	t[0][x - 1] = 'A';
	t[0][0] = 'A';
}

void	colle(int x, int y)
{
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			t[i][j] = 32;
			j++;
		}
		i++;
	}
	j = 0;
	while (j < x)
	{
		t[0][j] = '*';
		t[y- 1][j] = '*';
		j++;
	}
	colle_aux(x, y);
	print(t, x, y);
}
