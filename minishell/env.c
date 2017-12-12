/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 14:01:08 by cmiron            #+#    #+#             */
/*   Updated: 2017/04/04 14:02:55 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini.h"

void	ft_setpath(void)
{
	int		i;
	char	*temp;
	char	**tab;

	temp = (char *)malloc(sizeof(char) * 512);
	i = 0;
	while (g_env[i] && ft_strncmp(g_env[i], "PATH", 4))
		i++;
	if (g_env[i])
	{
		temp = ft_strdup(ft_strsplit(g_env[i], '=')[1]);
		tab = ft_strsplit(temp, ':');
		i = 0;
		while (tab[i])
		{
			g_path[i] = (char *)malloc(sizeof(char) * 256);
			g_path[i] = ft_strdup(tab[i]);
			i++;
		}
		g_path[i] = NULL;
	}
	else
		g_path[0] = NULL;
}

void	ft_env(void)
{
	int	i;

	i = 0;
	while (g_env[i])
	{
		ft_printf("%s\n", g_env[i]);
		i++;
	}
}

int		ft_findenv(char *str)
{
	int	i;

	i = 0;
	while (g_env[i] && str && ft_strcmp(ft_strsplit(g_env[i], '=')[0], str))
		i++;
	return (i);
}

void	ft_setenv(char **args)
{
	int	modify;
	int	ord;

	ord = ft_findenv(args[1]);
	if (!(args[4]))
		modify = 0;
	else
		modify = ft_atoi(args[4]);
	if (g_env[ord] && modify)
		free(g_env[ord]);
	g_env[ord] = (char *)malloc(sizeof(char) * 1024);
	g_env[ord] = ft_strdup(ft_strcat(ft_strdup(ft_strcat(ft_strdup(args[1]),
		"=")), args[3]));
}

void	ft_delenv(void)
{
	int	i;

	i = 0;
	while (g_env[i])
	{
		free(g_env[i]);
		i++;
	}
}
