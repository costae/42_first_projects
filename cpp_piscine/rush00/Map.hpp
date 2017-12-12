/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Map.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 20:11:16 by cmiron            #+#    #+#             */
/*   Updated: 2017/07/24 20:11:18 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_CLASS_HPP
#define MAP_CLASS_HPP
#include <iostream>
#include <ncurses.h>
#include <cstdlib>

class Map
{
private:
	int maxw, maxh;

public:
	Map();
	WINDOW *win;
	~Map();
	void printEdges();
	char table[50][151];
	void printTable(void);

	void game_over(int score);
};

#endif
