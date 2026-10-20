#pragma once
class Character
{
public:
	int hp = 100;
	//‹¤’Ê‚Ìˆ—
	virtual void ShowStatus();
	//
	virtual void Attack()=0;
};

