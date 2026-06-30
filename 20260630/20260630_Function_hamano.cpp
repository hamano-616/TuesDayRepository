#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260630_Header_hamano.h"
using namespace std;

int InputCheck(int input)
{
	int innum;
	while (true)
	{
		cin >> innum;
		if (innum < MIN || MAX < innum)
		{
			cout << "“ü—Í‚ÉŒë‚è‚ª‚ ‚è‚Ü‚·Ä“x“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B" << endl;

		}
		else
		{
			break;
		}
		
	}
	return innum;
}
void Judge()
{

}
