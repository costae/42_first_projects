/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 14:12:38 by cmiron            #+#    #+#             */
/*   Updated: 2016/12/13 14:12:43 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int				ft_text_copy(int const fd, char **line)
{
	int				ret;
	char			*tmp;
	char			buffer[BUFF_SIZE + 1];

	ret = -2;
	tmp = NULL;
	while ((!ft_strchr(*line, EOL)))
	{
		if ((ret = read(fd, buffer, BUFF_SIZE)) <= 0)
			return (ret);
		tmp = *line;
		buffer[ret] = 0;
		if (!(*line = ft_strjoin(*line, buffer)))
			return (ERROR);
		ft_strdel(&tmp);
		if (ret < BUFF_SIZE)
			return (ret);
	}
	return (ret);
}

static char				*ft_get_line(char *str, char **line)
{
	char			*tmp;
	char			*del;

	del = str;
	if (str && (tmp = ft_strchr(str, EOL)))
	{
		*line = ft_strsub(str, 0, ft_strlen(str) - ft_strlen(tmp));
		str = ft_strdup(tmp + 1);
		ft_strdel(&del);
	}
	else
	{
		*line = ft_strdup(str);
		ft_strclr(str);
	}
	return (str);
}

int						get_next_line(int const fd, char **line)
{
	int				ret;
	static char		*str;

	if (!line)
		return (ERROR);
	if (!str)
		str = ft_strnew(0);
	if ((ret = ft_text_copy(fd, &str)) == ERROR)
		return (ERROR);
	str = ft_get_line(str, line);
	if ((!ret && !ft_strlen(str) && !ft_strlen(*line)))
		return (0);
	else
		return (1);
}
