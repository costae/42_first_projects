#ifndef ENEMY_H
#define ENEMY_H
#include <iostream>
class Enemy
{
public:
	Enemy();
	Enemy(int hp, std::string const & type);
	Enemy(Enemy &other);
	std::string getType() const;
	int getHP() const;
	virtual ~Enemy();

	int hp;
	std::string type;
	
	virtual void takeDamage(int n);
};

#endif