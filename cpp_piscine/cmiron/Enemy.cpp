/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 20:10:11 by cmiron            #+#    #+#             */
/*   Updated: 2017/07/24 20:10:13 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"
#include <iostream>

int Enemy::score = 0;

Enemy::Enemy(int x, int ssize)
{
	this->exist = true;
	this->size = ssize;
	this->posX = x;
	this->posY = 2;

	for(int i =0; i<size; i++)
		for(int j=0; j<size; j++)
			this->body[i][j] = ' ';
	for(int i= 0; i < size; i++)
		for(int j = 0; j< size; j++)
		{
			if (i == 0 || i == size-1)
				this->body[i][j] = '@';
			else if (j == 0 || j == size -1)
				this->body[i][j] = '@';
		}
	for(int i =0; i<size; i++)
		for(int j=0; j<size; j++)
		{
			int m = rand() % 3;
			if(m == 0)
				this->body[i][j] = '@';
		}
	return ;
}

Enemy::~Enemy(void)
{
	return ;
}

void Enemy::toMap(char map[50][151])
{
	if(this->exist)
	{
		for(int i=0; i<this->size; i++)
			for(int j=0; j<this->size; j++)
			{
				map[this->posY+i][this->posX+j] = this->body[i][j];
			}
	}
}

int Enemy::collide(char map[50][151])
{
	if(this->exist)
	{
	for(int i=0; i<this->size; i++)
		for(int j=0; j<this->size; j++)
		{
			if(map[this->posY+i+1][this->posX+j] == '$')
				return 1;
			else if(map[this->posY+i+1][this->posX+j] == '-')
			{
				this->exist = false;
				for(int i=0; i<this->size; i++)
					for(int j=0; j<this->size; j++)
						this->body[i][j] = ' ';
				return 2;
			}
			else if(map[this->posY+i+1][this->posX+j] == '*')
			{
				if(this->times%500 == 0)
					Enemy::score+=15;
				this->body[i][j] = ' ';
			}
		}
	}
	return 0;
}

void Enemy::moveEnemy(void)
{
	if(this->exist)
	{
	if(this->times%500 == 0)
	{
		this->posY+=1;
		this->times = 0;
	}
	this->times++;
	}
}


