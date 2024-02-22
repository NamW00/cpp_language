#pragma once
#include "Zerg.h"

class Juggling : public Zerg
{
private:
	int health = 0;
	const int maxHP = 35;
public:
	virtual void Recovery();
	void SetHP(int health);
	int GetHP();

};

