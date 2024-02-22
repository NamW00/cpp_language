#include "Hydra.h"

void Hydra::Recovery()
{
	GetHP();
}

void Hydra::SetHP(int health)
{
	this->health = health;
	cout << "현재 체력 : " << health << endl;
}

int Hydra::GetHP()
{
	this->health = this->maxHP;
	cout << "회복된 체력 : " << health << endl;
	return 0;
}
