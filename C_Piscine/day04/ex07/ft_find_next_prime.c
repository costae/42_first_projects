/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dprovorn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 04:05:29 by dprovorn          #+#    #+#             */
/*   Updated: 2016/08/06 06:46:25 by dprovorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		return (0);
	else
	{
		while (i < nb)
		{
			if ((nb % i) == 0)
				return (1);
			i++;
		}
		return (0);
	}
}

int		ft_find_next_prime(int nb)
{
	while (ft_prime(nb) == 0)
		nb++;
	return (nb);
}
