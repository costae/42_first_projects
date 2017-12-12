/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 17:27:44 by cmiron            #+#    #+#             */
/*   Updated: 2016/08/10 18:31:19 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' && s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putstrad(char *str)
{
	ft_putstr(str);
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	char	*tab;
	int		find;
	int		i;

	find = 1;
	while (find)
	{
		find = 0;
		i = 0;
		while (++i < argc - 1)
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				tab = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = tab;
				find = 1;
			}
	}
	i = 0;
	while (++i < argc)
		ft_putstrad(argv[i]);
	return (0);
}
