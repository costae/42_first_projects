/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 01:31:42 by cmiron            #+#    #+#             */
/*   Updated: 2016/08/12 01:46:08 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char	*ft_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i] >= 'k')
				str[i] -= 10;
			else
				str[i] += 16;
		}
		i++;
	}
	return (str);
}

char	*ft_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i] >= 'K')
				str[i] -= 10;
			else
				str[i] += 16;
		}
		i++;
	}
	return (str);
}

char	*ft_rot42(char *str)
{
	ft_lowercase(str);
	ft_uppercase(str);
	return (str);
}

int		main()
{
	char str[] = "ABC";
	printf("%s\n", ft_rot42(str));

}
