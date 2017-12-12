/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullet.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 20:10:03 by cmiron            #+#    #+#             */
/*   Updated: 2017/07/24 20:10:05 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bullet.hpp"
#include <iostream>

Bullet::Bullet(int possX, int possY) 
{
	this->posX = possX;
	this->posY = possY;
	this->exist = true;
	this->times = 0;
	return ;
}

Bullet::~Bullet()
{
	return ;
}

void Bullet::moveBullet(char map[50][151])
{
	if(this->exist)
	{
		if(map[this->posY-1][this->posX] == '*')
		{
			 map[this->posY][this->posX]=' ';
			 map[this->posY-1][this->posX] = ' ';
			 this->exist = false;
		}
		if(this->posY == 1)
		{
			this->exist = false;
			map[this->posY][this->posX] = ' ';
		}
		if(this->times % 250 == 0)
			this->posY-=1;
	}
	if(this->exist)
		this->times++;
}


