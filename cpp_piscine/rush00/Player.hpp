/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 20:11:23 by cmiron            #+#    #+#             */
/*   Updated: 2017/07/24 20:11:25 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_CLASS_HPP
#define PLAYER_CLASS_HPP

#include <ncurses.h>
#include "Bullet.hpp"

class Player
{
public:
	int posX;
	int const posY;
	char form[2][9];
	Bullet *bullet[10000];
	int bullets;
	Player();
	~Player();
	void toMap(char map[50][151]);
	int move(int c, char map[50][151]);
	void fire();
};

#endif
