/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 14:53:16 by cmiron            #+#    #+#             */
/*   Updated: 2016/08/16 14:53:25 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char*, char*))
{
	int		i;
	short	flag;
	char	*temp;

	if (*(tab + 1) == 0 || *(tab) == 0)
		return ;
	flag = 0;
	while (flag == 0)
	{
		i = -1;
		flag = 1;
		while (*(tab + ++i + 1) != 0)
			if (cmp(tab[i], tab[i + 1]) > 0)
			{
				temp = tab[i + 1];
				tab[i + 1] = tab[i];
				tab[i] = temp;
				flag = 0;
			}
	}
}
