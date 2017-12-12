/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 20:34:12 by cmiron            #+#    #+#             */
/*   Updated: 2016/08/21 20:36:10 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H
#include <iostream>
#include <string>
float		eval_expr(char *expr);
float		parse_sum(char **expr);
float		parse_factors(char **expr);
float		parse_number(char **expr);
#endif
