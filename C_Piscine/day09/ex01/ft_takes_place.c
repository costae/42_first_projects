/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 19:58:38 by cmiron            #+#    #+#             */
/*   Updated: 2016/08/12 02:27:42 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int h;

	h = hour;
	if (hour > 12)
		h = hour % 12;
	if (hour == 0)
		h = 12;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour < 11)
		printf("%d.00 A.M. AND %d.00 A.M.\n", h, (h + 1) % 12);
	else if (hour == 11)
		printf("11.00 A.M. AND 12.00 P.M.");
	else if (hour == 23)
		printf("11.00 P.M. AND 12.00 A.M.");
	else if (hour == 24)
		printf("12.00 A.M. AND 1.00 A.M.");
	else
		printf("%d.00 P.M. AND %d.00 P.M.", h, (h + 1) % 12);
}
