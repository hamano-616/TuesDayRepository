#include"Megumi.h"
#include"Inumaki.h"
#include"Gojo.h"
#include<iostream>

int main(void)
{
	Megumi megumi;
	Inumaki inumaki;
	Gojo gojo;

	Sorcerer* sorcerer[3] = { &megumi,&inumaki,&gojo };

	for (int i = 0; i < 3; i++)
	{
		sorcerer[i]->ShowStatus();
		sorcerer[i]->UseTechnique();
	}
	return 0;
}