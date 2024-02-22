#include "Juggling.h"

void Juggling::Recovery()
{
}

void Juggling::SetHP(int health)
{
	this->health = health;
	cout << "현재 체력 : " << health << endl;
}

int Juggling::GetHP()
{
	this->health = this->maxHP;
	cout << "회복된 체력 : " << health << endl;
	return 0;
}
