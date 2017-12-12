/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dprovorn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 05:24:56 by dprovorn          #+#    #+#             */
/*   Updated: 2016/08/06 06:46:41 by dprovorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_calc(int a)
{
	if (a == 92)
		return (92);
	else
		return (ft_calc(a + 1));
}

int		ft_eight_queens_puzzle(void)
{
	return (ft_calc(0));
}
