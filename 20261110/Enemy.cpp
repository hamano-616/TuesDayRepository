#include "Enemy.h"
#include<iostream>
using namespace std;

Enemy::Enemy():hp(100){}
void Enemy::TakeDamage(int damage)
{
	hp -= damage;
	if (hp < 0)hp = 0;
}
void Enemy::ShowStatus()const
{
	cout << "Enemy HP:" << hp << endl;
}