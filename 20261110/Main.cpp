#include<iostream>
#include"Enemy.h"

int main(void)
{
	Enemy enemy1;
	Enemy enemy2;
	Enemy enemy3;

	Enemy* target = &enemy1;

	target->TakeDamage(30);
	target = &enemy2;
	target->TakeDamage(50);
	enemy1.ShowStatus();
	enemy2.ShowStatus();
	enemy3.ShowStatus();
	return 0;
}