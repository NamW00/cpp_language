#pragma once
#include "Zerg.h"

class Lurker : public Zerg
{
private:
	int health = 0;
	const int maxHP = 125;
public:
	virtual void Recovery();
	void SetHP(int health);
	int GetHP();


};

