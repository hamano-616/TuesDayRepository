#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260714_Header_hamano.h"
using namespace std;
int InputCheck(int min,int max)
{
	int player;
	while (true)
	{
		cin >> player;
		if (player<min || player>max)
		{
			cout << "入力した数字に誤りがあります再度入力してください。" << endl;
		}
		else
		{
			break;
		}
	}

	return player;
}
void Run()
{
	//変数宣言
	int player,enemy;
	int playerpoint = 0;
	int enemypoint = 0;
	int playernum[INDEX];
	int enemynum[INDEX];
	
	srand((unsigned int)time(NULL));
	
	cout << "どっちの数字が大きいゲーム！！" << endl;
	cout << "0～50までの数字のカードを10枚ずつ配ります\n"
		<< "一枚ずつ選択して数字が大きいほうが勝ち\n"
		<< "7回戦行ないます\n";
	cout << "あなたの手札は" << endl;
	for ( int i = 0; i < MAX; i++)
	{
		playernum[i] = rand() % RANDNUM_MAX;
		cout << i + 1 << "番：" << player[i] << endl;
	}
	for (  int i = 0; i < MAX; i++)
	{
		enemynum[i] = rand() % RANDNUM_MAX;
	}
	for (int i = 0; i < ROUND; i++)
	{
		cout << i + 1 << "回戦目" << endl;
		cout << "出す手札を選んでください" << endl;
		player = InputCheck(MIN, MAX);
		cout<<playernum[player-1];
		while (true)
		{
			if (playernum[player - 1] == -1)
			{
				cout << "使用済みの数字です" << endl;
			}
			else
			{
				break;
			}
		}
		enemy = rand() % MAX;
		while (true)
		{
			if (enemynum[enemy - 1] == -1)
			{
				enemy = rand() % MAX;
			}
			else
			{
				break;
			}
		}
		cout << enemynum[enemy - 1];
		if (playernum[player - 1] == enemynum[enemy - 1])
		{
			cout << "ドロー" << endl;
			playerpoint += 1;
			enemypoint += 1;
		}
		else if (playernum[player - 1] > enemynum[enemy - 1])
		{
			cout << "勝ち" << endl;
			playerpoint += 3;
		}
		else
		{
			cout << "負け" << endl;
			enemypoint += 3;
		}
		playernum[player - 1] = -1;
		enemynum[enemy - 1] = -1;


	}
	if (playerpoint > enemypoint)
	{
		cout << "PLAYYERWIN" << endl;
	}
	else
	{
		cout << "CPUWIN" << endl;
	}

}