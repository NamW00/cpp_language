#include "Lurker.h"

void Lurker::Recovery()
{
}

void Lurker::SetHP(int health)
{
	this->health = health;
	cout << "���� ü�� : " << health << endl;
}

int Lurker::GetHP()
{
	this->health = this->maxHP;
	cout << "ȸ���� ü�� : " << health << endl;
	return 0;
}
