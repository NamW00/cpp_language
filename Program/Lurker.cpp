#include "Lurker.h"

void Lurker::Recovery()
{
}

void Lurker::SetHP(int health)
{
	this->health = health;
	cout << "현재 체력 : " << health << endl;
}

int Lurker::GetHP()
{
	this->health = this->maxHP;
	cout << "회복된 체력 : " << health << endl;
	return 0;
}
