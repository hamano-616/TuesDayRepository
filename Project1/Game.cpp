#include "Game.h"
#include"Enemy.h"

#include<iostream>
#include<memory>
using namespace std;

void Game::Pointer()
{
	cout << "" << endl;

	Enemy enemy1("ƒXƒ‰ƒCƒ€");
	Enemy enemy2("ƒhƒ‰ƒSƒ“");
	Enemy* target = &enemy1;
	target->Draw();

	target = &enemy2;
	target->Draw();
	target->Damage(50);
}
void Game::Unique()
{

}
void Game::Shared()
{

}
void Game::Run()
{

}