/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 14:03:15 by cmiron            #+#    #+#             */
/*   Updated: 2017/04/04 14:03:17 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini.h"

void	ft_cpyenv(char **str)
{
	int	i;

	i = 0;
	while (g_env[i])
	{
		str[i] = (char *)malloc(sizeof(char) * 1024);
		str[i] = ft_strdup(g_env[i]);
		i++;
	}
	str[i] = NULL;
}

void	ft_echo(char **str)
{
	int	i;
	int	new_line;
	int	flag_stop;

	i = 1;
	new_line = 0;
	flag_stop = 0;
	while (str[i])
	{
		if (ft_strcmp(str[i], "-n") == 0 && flag_stop == 0)
			new_line = 1;
		if (ft_strcmp(str[i], "-n") == 1)
			flag_stop = 1;
		if (ft_strcmp(str[i], "-n"))
		{
			if (str[i + 1])
				ft_printf("%s ", ft_strsplit(str[i], '\"')[0]);
			else
				ft_printf("%s", ft_strsplit(str[i], '\"')[0]);
		}
		i++;
	}
	i = 0;
	(new_line != 0) ? ft_printf("%%\n") : ft_printf("\n");
}

void	ft_unsetenv(char *str)
{
	int		ord;
	char	*temp[200];
	int		i;
	int		j;

	ord = ft_findenv(str);
	i = 0;
	j = 0;
	if (g_env[ord])
	{
		ft_cpyenv(temp);
		ft_delenv();
		while (temp[i])
		{
			if (i != ord)
			{
				g_env[j] = (char *)malloc(sizeof(char) * 1024);
				g_env[j] = ft_strdup(temp[i]);
				j++;
			}
			i++;
		}
		g_env[j] = NULL;
	}
}

int		ft_verif(char **arg)
{
	if (!ft_strcmp(arg[0], "exit"))
		exit(1);
	else if (!ft_strcmp(arg[0], "cd"))
		chdir(arg[1]);
	else if (!ft_strcmp(arg[0], "env"))
		ft_env();
	else if (!ft_strcmp(arg[0], "setenv"))
		ft_setenv(arg);
	else if (!ft_strcmp(arg[0], "unsetenv"))
		ft_unsetenv(arg[1]);
	else if (!ft_strcmp(arg[0], "echo"))
		ft_echo(arg);
	else
		return (-1);
	return (1);
}

void	ft_execute(char **args)
{
	int	i;

	i = 0;
	if (execve(args[0], args, g_env) < 0)
	{
		while (execve(ft_strcat(ft_strdup(ft_strcat(ft_strdup(g_path[i]), "/")),
			args[0]), args, g_env) < 0)
		{
			i++;
			if (!g_path[i])
			{
				ft_printf("%s: Not found\n", args[0]);
				exit(-1);
			}
		}
	}
}
