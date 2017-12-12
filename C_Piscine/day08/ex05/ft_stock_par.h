/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 12:26:13 by cmiron            #+#    #+#             */
/*   Updated: 2016/08/13 12:26:34 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H
# include <stdlib.h>
char	**ft_split_whitespaces(char *str);
char	*ft_strdup(char *src);
typedef	struct	s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}				t_stock_par;
#endif
