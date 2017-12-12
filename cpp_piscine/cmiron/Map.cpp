/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Map.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 20:10:33 by cmiron            #+#    #+#             */
/*   Updated: 2017/07/24 20:10:38 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Map.hpp"

Map::Map()
{
	
	printEdges();
	initscr();
	nodelay(stdscr, true);
	keypad(stdscr, true);
	noecho();
	curs_set(0);
	getmaxyx(stdscr, maxw, maxh);
	// endwin();
	this->win = newwin(maxw, maxh, 0, 0);
	// printTable();
}

Map::~Map()
{
	endwin();
	return ; 
}

void	Map::printEdges()
{
	const char shit = '-';
	const char shit1 = '|';
	for(int j=0; j<50; j++)
			this->table[j][150] = 0;
	for(int i=0; i<50; i++)
		for(int j=0; j<150; j++)
			this->table[i][j] = ' ';
	for (int i=0; i < 50; i++)
	{
		for (int j = 0; j < 150; j++)
		{
			if (i == 0 || i == 49 )
				this->table[i][j] = shit;
			else if (j == 0 || j == 149)
				this->table[i][j] = shit1;
		}
	}
	return ;
}

void Map::printTable(void)
{
	for (int i=0; i < 50; i++)
	{
			mvprintw(i, 0, this->table[i]);
	}
}
