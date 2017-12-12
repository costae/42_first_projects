/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 20:10:24 by cmiron            #+#    #+#             */
/*   Updated: 2017/07/24 20:10:25 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <curses.h>
#include <iostream>
#include <ncurses.h>
#include <unistd.h>
#include <string>
#include <time.h>
#include <stdlib.h>
#include "Map.hpp"
#include "Player.hpp"
#include "Enemy.hpp"



int		main()
{
	srand (time(NULL));
	Map *map = new Map();
	Player *player = new Player();
	Enemy *enemy[100];
	int timer = 1;
	int enemies = 1;
	int dif = 10;
	int size = 2;
	bool cresc = true;
	int c;

	enemy[0] = new Enemy(73, size);
	clock_t t1,t2;
	float diff;
    t1=clock();
	while(1)
	{
		t2=clock();
    	diff = (float)t2-(float)t1;

		mvprintw(50,50, "Score: %d", Enemy::score);
		mvprintw(50,10, "Time: %.6f", diff);
		map->printEdges();
		for(int i = 0; i<enemies; i++)
			enemy[i]->toMap(map->table);
		player->toMap(map->table);
		map->printTable();
		c = getch();
		if(player->move(c, map->table) == 0)
			break;
		for(int i = 0; i<enemies; i++)
		{
			switch(enemy[i]->collide(map->table))
			{
				case 1:
					endwin();
					std::cout << "You played : " << (int)diff/1000000 << "  sec. \tScore is: " << Enemy::score;
					return 0;
				case 2:
					;
			}
			enemy[i]->moveEnemy();
		}
		timer %= 4000;
		if(timer == 0)
		{
			enemy[enemies] = new Enemy(73-dif, size);
			enemies++;
			if(dif != 0)
			{
			enemy[enemies] = new Enemy(73+dif, size);
			enemies++;
			}
			if(dif == 40)
				cresc = false;
			if(dif == 0)
			{
				if(size < 5)
					size++;
				cresc = true;
			}
			if(cresc)
				dif+=10;
			else
				dif-=10;
		}
		for(int i=0; i<enemies; i++)
		{
			for(int n=0; n<enemy[i]->size; n++)
				for(int m=0; m<enemy[i]->size; m++)
				{
					if(enemy[i]->body[n][m] == '&')
					{
						enemy[i]->body[n][m] = ' ';
					}

				}
			for(int n=0; n<enemy[i]->size; n++)
				for(int m=0; m<enemy[i]->size; m++)
					if(enemy[i]->body[n][m] != ' ')
						goto l2;
			enemy[i]->exist = false;
		 	l2: continue;		
		}
		timer++;
	}
	delete map;
}
