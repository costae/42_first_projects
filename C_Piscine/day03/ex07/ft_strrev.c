/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 22:41:17 by cmiron            #+#    #+#             */
/*   Updated: 2016/08/05 18:52:42 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char	*b;
	int		i;
	int		c;
	char	a[1000];

	c = 0;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i--;
	while (str[c] != '\0')
	{
		a[c] = str[i];
		i--;
		c++;
	}
	a[c] = '\0';
	b = a;
	return (b);
}
