#include "Character.h"
#include"Config.h"

#include<iostream>
#include<cstdlib>

using namespace std;

Character::Character()
{
	hp = Config::MAX_HP;

	attack = rand() % (Config::MAX_STATUS - Config::MIN_STATUS + 1) + Config::MIN_STATUS;
	defense=rand()% (Config::MAX_STATUS - Config::MIN_STATUS + 1) + Config::MIN_STATUS;
	evasion=rand()% (Config::MAX_STATUS - Config::MIN_STATUS + 1) + Config::MIN_STATUS;
}

//ステータス表示
void Character::ShowStatus()
{
	cout << "HP:" << hp << endl;
	cout << "攻撃力:" << attack << endl;
	cout << "防御力:" << defense << endl;
	cout << "回避力:" << evasion << endl;

}
//攻撃
void Character::Attack(Character& terget)
{
	//ランダムな攻撃値
	int randomValue = rand() % (Config::MAX_RANDOM_VALUE - Config::MIN_RANDOM_VALUE + 1) + Config::MIN_RANDOM_VALUE;
	int attackValue = attack + randomValue;
	cout << "攻撃値は" << attackValue << endl;
	//回避判定
	if (attackValue <= terget.evasion)
	{
		cout << "攻撃を回避しました。" << endl;
		cout << "ダメージは０です" << endl;
		return;
	}

	//ダメージ計算
	int damege = attackValue - terget.defense;

	if (damege < 0)
	{
		damege = 0;

	}
	terget.hp -= damege;
	cout << "攻撃成功！" << "ダメージ" << damege << "点です" << endl;

	//生存判定
	if (terget.hp < Config::DEAD_HP)
	{
		terget.hp = 0;
	}
}

void Character::Recovery()
{
	int randomValue = rand() % (Config::MAX_RANDOM_VALUE - Config::MIN_RANDOM_VALUE + 1) + Config::MIN_RANDOM_VALUE;
	hp += randomValue;
	if (hp > Config::MAX_HP)
	{
		hp=Config::
	}
}