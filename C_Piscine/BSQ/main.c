/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 19:52:37 by cmiron            #+#    #+#             */
/*   Updated: 2016/08/24 19:52:41 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char **argv)
{
	char *s;

	s = (char*)malloc(sizeof(char) * 3);
	if (argc == 1)
		argv_stdin(s);
	else
		argv_files(argc, argv, s);
	free(s);
}
