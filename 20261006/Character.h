#pragma once
class Character
{
protected:
	int hp;
	int attack;
	int defense;
	int evasion;
public:

	/// <summary>
	/// コンストラクタ
	/// </summary>
	Character();
	
	//ステータス表示
	void ShowStatus();
	//攻撃
	void Attack(Character& target);
	//回復
	void Recovery();
	//生存判定
	bool IsAlive();
	//HP取得
	int GetHp();

};

