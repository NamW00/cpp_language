#pragma once
#include "Character.h"

class Bank
{
private:
	int bankMoney = 0;
public:
	void Withdrawal(Character & character, int money); // 복사 비용을 줄이기 위해 reference('&')를 넣음

	void Show();
};

