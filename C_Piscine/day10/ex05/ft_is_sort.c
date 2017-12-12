/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 14:07:57 by cmiron            #+#    #+#             */
/*   Updated: 2016/08/16 14:12:36 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	while (i < length)
	{
		if (f(tab[i], tab[i + 1]) <= 0)
			i++;
		else
			break ;
	}
	if (i == length - 1)
		return (1);
	i = 0;
	while (i < length)
	{
		if (f(tab[i][i + 1]) >= 0)
			i++;
		else
			break ;
	}
	if (i == length - 1)
		return (1);
	return (0);
}
