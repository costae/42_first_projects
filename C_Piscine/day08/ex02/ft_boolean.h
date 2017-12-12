/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 12:04:48 by cmiron            #+#    #+#             */
/*   Updated: 2016/08/13 14:40:17 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>
# define ODD_MSG "I have an impair number of arguments."
# define EVEN_MSG "I have a pair number of arguments."
# define TRUE 1
# define FALSE 0
# define SUCCESS 0
# define EVEN (x) x % 2 == 0

typedef int		t_bool;
#endif
