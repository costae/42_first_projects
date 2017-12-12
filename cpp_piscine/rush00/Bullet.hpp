/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullet.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 20:10:58 by cmiron            #+#    #+#             */
/*   Updated: 2017/07/24 20:11:00 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BULLET_CLASS_HPP
# define BULLET_CLASS_HPP
class Bullet
{
public:
	Bullet(int possX, int possY);
	~Bullet();
	
	int posX;
	int posY;
	int times;
	bool exist;

	void moveBullet(char map[50][151]);
};

#endif
