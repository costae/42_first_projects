/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 14:59:28 by cmiron            #+#    #+#             */
/*   Updated: 2016/08/14 18:54:41 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_size(char **av)
{
	int i;
	int j;

	i = 0;
	while (++i < 10)
		if (!*(av + i))
			return (0);
	i = 0;
	while (++i < 10)
	{
		j = -1;
		while (av[i][++j])
			if ((av[i][j] < '1' && av[i][j] > '9' && av[i][j] != '.') || j > 9)
				return (0);
		if (j != 9)
			return (0);
	}
	return (1);
}

int		ft_check(int ac, char **av)
{
	int i;
	int j;
	int n;

	if (ac != 10)
		return (0);
	if (!ft_size(av))
		return (0);
	i = 0;
	n = -1;
	while (++i < 10)
	{
		j = -1;
		while (++j < 9)
			if (av[i][j] != '.')
				n++;
	}
	if (n < 17)
		return (0);
	return (1);
}
