#include<iostream>
using namespace std;
//定数
const int INDEX = 10;
const int MIN = 0;
const int MAX = 100;
//関数プロトタイプ宣言
void AddArray();
int InputCheck(int min, int max);


int main(void)
{
	AddArray();
	return 0;
}
void AddArray()
{
	int innum;
	int even[INDEX] = {};
	int odd[INDEX] = {};
	cout << "10個の数値を入力" << endl;
	for (int i = 0; i < INDEX; i++)
	{
		innum = InputCheck(MIN, MAX);
		if (innum % 2 == 0)
		{
			even[i] = innum;
		}
		else
		{
			odd[i] = innum;
		}
	}
	cout << "偶数" << endl;
	for (int i = 0; i < INDEX; i++)
	{
		if (even[i] > 0)
		{
			cout << even[i] << endl;
		}

	}
	cout << "奇数" << endl;
	for (int i = 0; i < INDEX; i++)
	{
		if (odd[i] > 0)
		{
			cout << odd[i] << endl;
		}

	}

}
int InputCheck(int min, int max)
{
	int num;

	while (true)
	{
		cin >> num;
		if (num<min || num>max)
		{
			cout << "入力に誤りがあります再度入力してください" << endl;
		}
		else
		{
			break;
		}
	}
	return num;
}