/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 20:11:06 by cmiron            #+#    #+#             */
/*   Updated: 2017/07/24 20:11:08 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_CLASS_HPP
# define ENEMY_CLASS_HPP

#include <stdlib.h>

class Enemy
{
public:
	Enemy(int x, int ssize);
	~Enemy();
	
	bool exist;
	int size;
	char body[5][5];
	int posX;
	int posY;
	int times;
	static int score;

	void toMap(char map[50][151]);	
	void moveEnemy(void);
	int collide(char map[50][151]);
};

#endif
