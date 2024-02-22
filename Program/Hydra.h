#pragma once
#include "Zerg.h"

class Hydra : public Zerg
{
private:
	int health = 0;
	const int maxHP = 80;
public:
	virtual void Recovery();
	void SetHP(int health);
	int GetHP();
};

