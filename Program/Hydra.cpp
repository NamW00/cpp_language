#include "Hydra.h"

void Hydra::Recovery()
{
	GetHP();
}

void Hydra::SetHP(int health)
{
	this->health = health;
	cout << "���� ü�� : " << health << endl;
}

int Hydra::GetHP()
{
	this->health = this->maxHP;
	cout << "ȸ���� ü�� : " << health << endl;
	return 0;
}
