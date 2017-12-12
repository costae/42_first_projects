/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 20:34:45 by cmiron            #+#    #+#             */
/*   Updated: 2016/08/21 20:38:06 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_functs.h"
#include "eval_expr.h"

std::string::size_type sz;

float		parse_number(char **expr)
{
	float nbr;

	while (**expr == ' ')
		(*expr)++;
	if (**expr == '(')
	{
		(*expr)++;
		nbr = parse_sum(expr);
		if (**expr == ')')
			(*expr)++;
		return (nbr);
	}
	std::string str = *expr;
	float nr = std::stof(str, &sz);
	*expr+=sz;
	return (nr);
}

float		parse_factors(char **expr)
{
	float		nbr;
	float		nbr2;
	char	op;

	nbr = parse_number(expr);
	while (**expr)
	{
		while (**expr == ' ')
			(*expr)++;
		op = **expr;
		if (op != '/' && op != '*' )
			return (nbr);
		(*expr)++;
		nbr2 = parse_number(expr);
		if (op == '/')
			nbr /= nbr2;
		else if (op == '*')
			nbr *= nbr2;
		// else
		// 	nbr %= nbr2;
	}
	return (nbr);
}

float		parse_sum(char **expr)
{
	float		nbr;
	float		nbr2;
	char	op;

	nbr = parse_factors(expr);
	while (**expr)
	{
		while (**expr == ' ')
			(*expr)++;
		op = **expr;
		if (op != '+' && op != '-')
			return (nbr);
		(*expr)++;
		nbr2 = parse_factors(expr);
		if (op == '+')
			nbr += nbr2;
		else
			nbr -= nbr2;
	}
	return (nbr);
}

float		eval_expr(char *expr)
{
	return (parse_sum(&expr));
}
