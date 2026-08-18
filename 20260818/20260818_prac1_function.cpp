#include<iostream>
#include"20260818_prac1.h"
using namespace std;

void Heal(int *hp)
{
	*hp += HEAL;
}
void Damege(int* hp)
{
	*hp -= DAMEGE;
}