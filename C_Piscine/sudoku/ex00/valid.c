/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 14:27:42 by cmiron            #+#    #+#             */
/*   Updated: 2016/08/14 18:29:19 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		valid(int puzzle[][9], int row, int col, int num)
{
	int begrow;
	int begcol;
	int i;

	begrow = (row / 3) * 3;
	begcol = (col / 3) * 3;
	i = -1;
	while (++i < 9)
	{
		if (puzzle[row][i] == num)
			return (0);
		if (puzzle[i][col] == num)
			return (0);
		if (puzzle[begrow + (i % 3)][begcol + (i / 3)] == num)
			return (0);
	}
	return (1);
}

int		fill(int puzzle[][9], int row, int col);

int		zbs(int puzzle[][9], int row, int col)
{
	int i;

	i = -1;
	while (++i < 9)
		if (valid(puzzle, row, col, i + 1))
		{
			puzzle[row][col] = i + 1;
			if ((col + 1) < 9)
			{
				if (fill(puzzle, row, col + 1))
					return (1);
				else
					puzzle[row][col] = 0;
			}
			else if ((row + 1) < 9)
			{
				if (fill(puzzle, row + 1, 0))
					return (1);
				else
					puzzle[row][col] = 0;
			}
			else
				return (1);
		}
	return (0);
}

int		fill(int puzzle[][9], int row, int col)
{
	if (row < 9 && col < 9)
	{
		if (puzzle[row][col] != 0)
		{
			if ((col + 1) < 9)
				return (fill(puzzle, row, col + 1));
			else if ((row + 1) < 9)
				return (fill(puzzle, row + 1, 0));
			else
				return (1);
		}
		else
			return (zbs(puzzle, row, col));
	}
	else
		return (1);
}
