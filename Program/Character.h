#pragma once
#include <iostream>
class Character
{
private:
	int money = 30000;

	friend class Bank; // Bank�� Character�� ������������ ������ ��밡���ϴ�.

public:
	void Show();

};

