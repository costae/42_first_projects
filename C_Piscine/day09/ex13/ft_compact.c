/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 16:55:39 by cmiron            #+#    #+#             */
/*   Updated: 2016/08/12 16:56:09 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_getsize(char **tab, int length)
{
	int i;
	int size;

	i = -1;
	size = 0;
	while (++i < length)
	{
		if (*(tab + i) != 0)
			size++;
	}
	return (size);
}

int	ft_check(char **tab, int length)
{
	int i;

	i = -1;
	while (++i < length)
		if (*(tab + i) == 0)
			return (1);
	return (0);
}

int	ft_compact(char **tab, int length)
{
	int i;
	int new_length;
	int j;

	new_length = ft_getsize(tab, length);
	while (ft_check(tab, new_length))
	{
		i = -1;
		while (++i < length)
			if (*(tab + i) == 0)
			{
				j = i;
				while (++j < length)
				{
					*(tab + i) = *(tab + j);
					i = j;
				}
			}
	}
	i = new_length - 1;
	while (++i < length)
		*(tab + i) = 0;
	return (new_length);
}
