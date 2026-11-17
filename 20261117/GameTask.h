#pragma once
#include <memory>
#include<vector>
#include "EnemyTask.h"
#include "ConfigTask.h"
class GameTask
{
private:
	std::vector<std::shared_ptr<EnemyTask>> enemies;
	//‰Šú‰»
	void Init();
	//•`‰æ
	void Draw()const;
	//UŒ‚
	void Attack();
	//ƒNƒŠƒA”»’è
	bool IsGameClear() const;

public:
	//Às
	void Run();
};

