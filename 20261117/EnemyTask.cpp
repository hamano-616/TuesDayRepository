#include "EnemyTask.h"
#include "ConfigTask.h"

EnemyTask::EnemyTask() :hp(ConfigTask::ENEMY_HP) {}
EnemyTask::~EnemyTask() {}

//敵にダメージ
void EnemyTask::Damage(int damage)
{
	hp -= damage;
	if (hp < 0)
	{
		hp = 0;
	}
}
//HPを獲得
int EnemyTask::GetHp() const
{
	return hp;
}

//生存確認
bool EnemyTask::IsAlive() const
{
	return hp > 0;
}