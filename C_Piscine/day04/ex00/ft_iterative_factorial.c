/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dprovorn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 00:47:05 by dprovorn          #+#    #+#             */
/*   Updated: 2016/08/06 06:42:15 by dprovorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int a;
	int res;

	a = 1;
	res = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		while (a <= nb)
		{
			res *= a;
			a++;
		}
		return (res);
	}
}
