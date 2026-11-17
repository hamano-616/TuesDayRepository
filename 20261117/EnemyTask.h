#pragma once
class EnemyTask
{
private:
	int hp;
public:
	//インストラクタ
	EnemyTask();
	//デストラクタ
	~EnemyTask();

	//ダメージを与える
	void Damage(int damage);
	//体力を得る
	int GetHp()const;
	//生存確認
	bool IsAlive() const;
};