#pragma once
#include <iostream>
using namespace std;

class Mechanic
{
private:
	int health;
	int attack;
public:
	Mechanic();
	virtual ~Mechanic();

	// ���� �Լ��� ��� ���� �Լ� ���̺��� ����Ͽ�
	// ȣ��Ǵ� �Լ��� ���� �ð��� �����ϸ�, ��������
	// ����� �Լ��� ���� �Լ��� ������ �� �����ϴ�.
	virtual void Move();
};