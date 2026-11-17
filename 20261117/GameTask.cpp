#include "GameTask.h"
#include<iostream>
#include<limits>
#include"ConfigTask.h"

void GameTask::Init()
{
	//“G‚Ì¶¬
	for (int i = 0; i < ConfigTask::ENEMY_COUNT; i++)
	{
		enemies.push_back(std::make_shared<EnemyTask>());
	}
}
//“G‚ÌƒXƒe[ƒ^ƒX‚Ì•\¦
void GameTask::Draw() const
{
	std::cout << "“G:\n";
	for (int i = 0; i < enemies.size(); i++)
	{
		if (enemies[i]->IsAlive())
		{
			std::cout << "“G" << i + 1 << "HP:"
				<< enemies[i]->GetHp() << "\n";
		}
		else
		{
			std::cout << "Œ‚”jÏ‚İ\n";
		}
	}
}
//“G‚ğUŒ‚
void GameTask::Attack()
{
	int target;
	std::cout << "UŒ‚‚·‚é“G‚ğ‘I‘ğ‚µ‚Ä‚­‚¾‚³‚¢B(1`3)\n";
	//‘ÎÛ‚ğ“ü—Í
	if (!(std::cin >> target))
	{
		std::cout << "”š‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		return;

	}

	if (target < 1 || target > ConfigTask::ENEMY_COUNT)
	{
		std::cout << "“ü—Í‚µ‚½”š‚Í‘I‘ğo—ˆ‚Ü‚¹‚ñBÄ“x“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n";
		return;
	}

	std::shared_ptr<EnemyTask> targetEnemy = enemies[target - 1];

	if (!targetEnemy->IsAlive())
	{
		std::cout << "‚±‚Ì“G‚Í‚·‚Å‚É“|‚³‚ê‚Ä‚¢‚Ü‚·B\n";
		return;
	}
	//ƒAƒiƒEƒ“ƒX
	std::cout << "UŒ‚‚·‚é“G‚ÍA" << target << "\n";

	targetEnemy->Damage(ConfigTask::DAMEGE);
	std::cout << "“G" << target << "‚Éí“¬ƒ_ƒ[ƒW"
		<< ConfigTask::DAMEGE << "‚ğ—^‚¦‚Ü‚µ‚½B\n";

}
//c“G‚ª0‚ÅƒQ[ƒ€ƒNƒŠƒA
bool GameTask::IsGameClear() const
{
	for (const auto& enemy : enemies)
	{
		if (enemy->IsAlive())
		{
			return false;
		}
	}

	return true;
}
//ƒQ[ƒ€‚ÌÀs
void GameTask::Run()
{
	Init();

	while (true)
	{
		Draw();
		Attack();
		if (IsGameClear())
		{
			std::cout << "GamerClear\n";
			break;
		}
	}
}