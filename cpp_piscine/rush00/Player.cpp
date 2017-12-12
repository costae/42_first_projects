/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 20:10:45 by cmiron            #+#    #+#             */
/*   Updated: 2017/07/24 20:10:46 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Player.hpp"
#include <iostream>

Player::Player() : posX(70), posY(46)
{
	for(int i=0; i<2; i++)
		for(int j=0; j<9; j++)
			this->form[i][j] = ' ';
	this->form[0][4] = '$';
	for(int i=0; i<9; i++)
		this->form[1][i] = '$';
	this->bullets = 0;
	return;
}

Player::~Player()
{
	return;
}

void Player::toMap(char map[50][151])
{
	for(int i=0; i<2; i++)
		for(int j=0; j<9; j++)
		{
			map[posY+i][posX+j] = this->form[i][j];
		}
	for(int i=0; i< this->bullets; i++)
	{
		if(this->bullet[i]->exist)
			map[this->bullet[i]->posY][this->bullet[i]->posX] = '*';
	}
}

int Player::move(int c, char map[50][151])
{
	if(c == 27)
		return(0);
	else if(c == KEY_LEFT)
	{
		if(this->posX > 1)
			this->posX-=1;
	}
	else if(c == KEY_RIGHT)
	{

		if(this->posX < 139)
			this->posX+=1;
	}
	else if(c == ' ')
	{
		fire();
	}
	for(int i=0; i<this->bullets; i++)
	{
		this->bullet[i]->moveBullet(map);
	}
	return 1;
}

void Player::fire()
{
	bullet[this->bullets] = new Bullet(this->posX+4, this->posY-1);
	this->bullets++;
}
