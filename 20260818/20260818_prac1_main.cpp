#include<iostream>
#include"20260818_prac1.h"
using namespace std;

int main(void)
{
	int hp = 100;
	int* php = &hp;
	cout <<"HP:"<< * php << endl;
	Heal(&hp);
	cout << "HP:" << *php << endl;
	Damege(&hp);
	cout << "HP:" << *php << endl;

	return 0;

}