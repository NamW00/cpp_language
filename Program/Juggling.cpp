#include "Juggling.h"

void Juggling::Recovery()
{
}

void Juggling::SetHP(int health)
{
	this->health = health;
	cout << "���� ü�� : " << health << endl;
}

int Juggling::GetHP()
{
	this->health = this->maxHP;
	cout << "ȸ���� ü�� : " << health << endl;
	return 0;
}
