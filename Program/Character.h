#pragma once
#include <iostream>
class Character
{
private:
	int money = 30000;

	friend class Bank; // Bank만 Character의 세부정보들을 가져와 사용가능하다.

public:
	void Show();

};

