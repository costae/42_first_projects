/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 20:46:41 by cmiron            #+#    #+#             */
/*   Updated: 2016/08/11 20:47:21 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c);

int		get_count(char *str);

int		get_size(char *s, int i);

char	**ft_split_whitespaces(char *str);

void	ft_print_words_tables(char **tab)
{
	int i;
	int j;

	i = -1;
	j = 0;
	while (*(tab + ++i) != NULL && (j = -1))
	{
		while (*(*(tab + i) + ++j) != 0)
			ft_putchar(*(*(tab + i) + j));
		ft_putchar('\n');
	}
}
