#include <iostream>
#include "../Program/Goliath.h"
#include "../Program/Siege_Tank.h"
#include "../Program/Vulture.h"

using namespace std;

void Calculator(char x, char y)
{
	cout << "char Function : " << (char)(x + y) << endl;
	cout << "char Function : " << x << y << endl;

}

void Calculator(int x, int y)
{
	cout << "int Function : " << x + y << endl;
}

void Calculator(float x, float y)
{
	cout << "float Function : " << x + y << endl;

}

void Calculator(float x, float y, float z)
{
	cout << "float Function : " << x + y + z << endl;

}

int main()
{
#pragma region ������
	// ���� ���� ���� �ٸ� ��ü�� ������ �����
	// ���� �ٸ� ������� ó���� �� �ִ� ����Դϴ�.

	// �������� ������ ������ �Լ��� �Ӽ��� �����Ǵ�
	// ���� ���ε��� ���� �ʰ�, ���� �ð��� �Լ���
	// �Ӽ��� ������ �� �ִ� ���� ���ε��� �����ϰ� �մϴ�.

#pragma endregion

#pragma region �Լ��� �����ε�
	// ���� �̸��� �Լ��� �Ű� ������ �ڷ����� �Ű� ������ ����
	// �����Ͽ� ���� ���� ������ �� �ִ� ����Դϴ�.

	// Calculator('!', 'B');
	// 
	// Calculator(10, 20);
	// 
	// Calculator(10.5f, 20.5f);
	// 
	// Calculator(10.5f, 20.5f, 30.5f);

	// �Լ��� �����ε��� ��� �Լ��� �Ű� ������ �����ϴ�
	// �μ��� ���¸� ���� ȣ���ϹǷ�, ��ȯ������ �Լ���
	// �����ε��� ������ �� �����ϴ�.

#pragma endregion

#pragma region �Լ��� �������̵�
	// ���� Ŭ������ �ִ� �Լ��� ���� Ŭ�������� ������ �Ͽ�
	// ����ϴ� ����Դϴ�.
	// �����ٶ�� �ǹ̸� ���Ѵ�.

	// �Լ��� �������̵�� ��� ���迡���� �̷������, ����
	// Ŭ�������� �Լ��� ������ �� �� ���� Ŭ������ �Լ�
	// ���¿� ��ġ�ؾ� �մϴ�.

	// Mechanic machanic;
	// machanic.Move();
	// 
	// Goliath goliath;
	// goliath.Goliath_Move();
	// 
	// Siege_Tank siege_tank;
	// siege_tank.Siege_Tank_Move();
	// 
	// Vulture vulture;
	// vulture.Vulture_Move();

#pragma endregion


	return 0;
}