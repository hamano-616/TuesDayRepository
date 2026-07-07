#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260707_Header2_hamano.h"
using namespace std;
int InputCheck(int min, int max)
{
	int num;
	while (true)
	{
		cin >> num;
		if (num < min || max < num)
		{
			cout << "入力に誤りがあります再度入力してください。" << endl;
		}
		else
		{
			break;
		}
	}
	return num;
}
void Game()
{
	int player, enemy;
	int plnum[INDEX];
	int ennum[INDEX];
	int plhit=0;
	int enhit=0;
	srand((unsigned int)time(NULL));
	cout << "CPUとの対戦ゲームとして3つの数字を当てましょう。" << endl;
	cout << "あなたの手札は\n";
	for (int i = MIN; i < INDEX; i++)
	{
		plnum[i] = rand() % 10;
		if (i == 1)
		{
			while (true)
			{
				if (plnum[i] == plnum[i-1])
				{
					plnum[i] = rand() % 10;
				}
				else
				{
					break;
				}
			}
		}
		else if (i == 2)
		{
			while (true)
			{
				if (plnum[i] == plnum[i-1] || plnum[i] == plnum[i-2])
				{
					plnum[i] = rand() % 10;
				}
				else
				{
					break;
				}
			}
		}
		cout << plnum[i];
	}
	cout << "です" << endl;

	for (int i = MIN; i < INDEX; i++)
	{
		ennum[i] = rand() % 10;
		if (i == 1)
		{
			while (true)
			{
				if (ennum[i] == ennum[i-1])
				{
					ennum[i] = rand() % 10;
				}
				else
				{
					break;
				}
			}
		}
		else if (i == 2)
		{
			while (true)
			{
				if (ennum[i] == ennum[i-1] || ennum[i] == ennum[i-2])
				{
					ennum[i] = rand() % 10;
				}
				else
				{
					break;
				}
			}
		}
		cout << ennum[i] << endl;
	}

	while (true)
	{
		cout << "プレイヤーのターン" << endl;
		for (int i = MIN; i < INDEX; i++)
		{
			player = InputCheck(MIN, MAX);
			if (ennum[i] == player)
			{
				cout << "HIT" << endl;
				plhit += 1;
				ennum[i] = 100;
			}
			else if (ennum[i] == 100)
			{
				cout << "HIT済み" << endl;
			}
			else
			{
				cout << "MISS" << endl;
			}
		}
		cout << "エネミーのターン" << endl;
		for (int i = MIN; i < INDEX; i++)
		{
			enemy = rand() % 10;
			cout << enemy << endl;
			if (plnum[i] == enemy)
			{
				cout << "HIT" << endl;
				enhit += 1;
				plnum[i] = 100;
			}
			else if (plnum[i] == 100)
			{
				cout << "HIT済み" << endl;
			}
			else
			{
				cout << "MISS" << endl;
			}
		}
		if (plhit == 3)
		{
			cout << "プレイヤーの勝ち" << endl;
			break;
		}
		else if (enhit == 3)
		{
			cout << "エネミーの勝ち" << endl;
		}

	}


}
