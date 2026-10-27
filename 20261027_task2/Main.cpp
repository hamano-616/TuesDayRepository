#include"Enemy.h"
#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>

using namespace std;
int main(void)
{
	srand((unsigned)time(NULL));
	vector<Enemy> enemies;
	enemies.push_back(Enemy(rand() % 71 + 30));
	enemies.push_back(Enemy(rand() % 71 + 30));
	enemies.push_back(Enemy(rand() % 71 + 30));
	for (const Enemy& enemy : enemies)
	{
		enemy.ShowStatus();
	}
	cout << "“G‚Ì”‚Í" << enemies.size() << endl;
	return 0;
}
