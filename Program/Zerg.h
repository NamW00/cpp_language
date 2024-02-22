#pragma once
#include <iostream>
using namespace std;
class Zerg
{
protected:
	int health;
	int maxHP;
public:
	virtual void Recovery();
	void SetHP(int health);
	int GetHP();
};
