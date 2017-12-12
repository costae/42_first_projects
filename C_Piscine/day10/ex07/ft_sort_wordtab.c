/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 14:47:55 by cmiron            #+#    #+#             */
/*   Updated: 2016/08/16 14:51:22 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i == 0 && (*(s1 + j) != 0 || *(s2 + j) != 0))
	{
		i = *(s1 + j) - *(s2 + j);
		j++;
	}
	return (i);
}

void	ft_sort_wordtab(char **tab)
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
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				temp = tab[i + 1];
				tab[i + 1] = tab[i];
				tab[i] = temp;
				flag = 0;
			}
	}
}
