#include"Card.h"
#include<iostream>

int main(void)
{
	int ary[TOTAL_CARD];
	createCard(ary);

	shuffleCard(ary);

	showCard(ary);

}