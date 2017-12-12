/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 14:28:35 by cmiron            #+#    #+#             */
/*   Updated: 2016/08/14 18:52:13 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check(int ac, char **av);

int		fill(int puzzle[][9], int row, int col);

void	show(int puzzle[][9])
{
	int		i;
	int		j;
	char	c;

	i = -1;
	while (++i < 9)
	{
		j = -1;
		while (++j < 9)
		{
			c = puzzle[i][j] + 48;
			write(1, &c, 1);
			if (j < 8)
				write(1, " ", 1);
		}
		write(1, "\n", 1);
	}
}

void	introd(int argc, char **argv)
{
	int puzzle[9][9];
	int i;
	int j;
	int n;

	n = 0;
	i = 0;
	while (++i < argc)
	{
		j = -1;
		while (++j < 9)
		{
			if (argv[i][j] != '.')
				puzzle[n][j] = argv[i][j] - '0';
			else
				puzzle[n][j] = 0;
		}
		n++;
	}
	if (fill(puzzle, 0, 0))
		show(puzzle);
	else
		write(1, "Erreur\n", 7);
}

int		main(int argc, char **argv)
{
	if (ft_check(argc, argv))
	{
		introd(argc, argv);
	}
	else
		write(1, "Erreur\n", 7);
	return (0);
}
