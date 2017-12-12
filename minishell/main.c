/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 14:02:35 by cmiron            #+#    #+#             */
/*   Updated: 2017/04/04 14:02:37 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini.h"

char	ft_charret(char *str)
{
	if (ft_strchr(str, ';'))
		return (';');
	if (ft_strchr(str, '|'))
		return ('|');
	if (ft_strchr(str, '&'))
		return ('&');
	return (0);
}

void	ft_checks(char *str)
{
	char	**args;
	char	**colon;
	pid_t	proc;
	int		i;
	char	c;

	i = -1;
	c = ft_charret(str);
	colon = ft_strsplit(str, c);
	while (colon[++i])
	{
		args = ft_strsplit(colon[i], ' ');
		ft_setpath();
		if (args[0] && ft_verif(args) == -1)
		{
			proc = fork();
			if (proc > 0)
				wait(NULL);
			else if (proc == 0)
				ft_execute(args);
			else
				ft_printf("Couldn't create procces\n");
		}
	}
	ft_printf("$> ");
}

void	ft_dupenv(char **env)
{
	int	i;

	i = 0;
	while (env[i])
	{
		g_env[i] = (char *)malloc(sizeof(char) * 1024);
		g_env[i] = ft_strdup(env[i]);
		i++;
	}
	g_env[i] = NULL;
}

void	ft_sigint(void)
{
	ft_printf("\n$> ");
	g_sigint = 0;
}

int		main(int ac, char **av, char **env)
{
	char	*str;

	(void)ac;
	(void)av;
	g_sigint = 1;
	signal(SIGINT, (void *)ft_sigint);
	str = (char *)malloc(sizeof(char) * 1024);
	if (g_sigint)
		ft_printf("$> ");
	ft_dupenv(env);
	while (get_next_line(0, &str))
		ft_checks(str);
}
