#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type)
{
	this->hp = hp;
	this->type = type;
	return;
}

Enemy::Enemy(Enemy &other)
{
	*this = other;
}

Enemy::Enemy()
{
	return;
}

Enemy::~Enemy()
{
	return;
}

std::string Enemy::getType() const
{
	return this->type;
}

int Enemy::getHP() const
{
	return this->hp;
}

void Enemy::takeDamage(int n)
{
	if (this->hp < n)
		this->hp = 0;
	else
		this->hp-=n;
}
