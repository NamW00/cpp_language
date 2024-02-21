#include <iostream>
#include <stdarg.h>
#include "../Program/Marine.h"

using namespace std;

class Mouse
{
public:
	Mouse()
	{
		cout << "Create Mouse" << endl;
	}

	~Mouse()
	{
		cout << "Relaese Mouse" << endl;
	}

	void OnDrag()
	{
		cout << "Drag" << endl;
	}

	void Connect()
	{
		cout << "Connect Mouse" << endl;
	}
};

class Keyboard
{
public:
	Keyboard()
	{
		cout << "Create Keyboard" << endl;
	}

	~Keyboard()
	{
		cout << "Release Keyboard" << endl;
	}

	void Typing()
	{
		cout << "Typing" << endl;
	}

	void Connect()
	{
		cout << "Keyboard Connect" << endl;
	}
};

class Computer : public Mouse, public Keyboard
{
public:
	Computer()
	{
		cout << "Create Computer" << endl;
	}

	~Computer()
	{
		cout << "Release Computer" << endl;
	}

	void Use()
	{
		Typing();
		OnDrag();

		Mouse::Connect();
		Keyboard::Connect();
	}
};

void Debug(int count, ...)
{
	// va_list  : ���� ���� ������� ���� ������
	//            �޸� �ּҸ� �����ϴ� �������Դϴ�.

	va_list vaList; // ���� ���� ��� ������

	// va_start : ���� ������ ���� �ּҸ� �������� �����Դϴ�.

	va_start(vaList, count); // ���� ���� ��� ������ ����

	// va_arg   : ���� ���� �����Ϳ��� Ư�� �ڷ����� ũ�⸸ŭ
	//            �̵��ϴ� �����̰�, ���� ��ȯ�ϴ� �����Դϴ�.
	for (int i = 0; i < count; i++)
	{
		// int ũ�⸸ŭ ���� ���� ��� �����Ϳ��� ���� ��ȯ�մϴ�.
		cout << va_arg(vaList, int) << " ";
	}

	// va_end   : ���� ���� ó���� ������ �� �����͸� NULL��
	//            �ʱ�ȭ�ϴ� �����Դϴ�.

	va_end(vaList); // ���� ���� ��� �����͸� NULL�� �ʱ�ȭ�մϴ�.
}


int main()
{
#pragma region ���
	// ���� Ŭ������ �Ӽ��� ���� Ŭ������ ����� �� �ֵ���
	// �������ִ� ����Դϴ�.

	// Unit unit;
	// 
	// cout << "unit ������Ʈ�� ũ�� : " << sizeof(unit) << endl;
	// 
	// Marine marine;
	// 
	// cout << "marine ������Ʈ�� ũ�� : " << sizeof(marine) << endl;

	// Ŭ������ ��� ���迡�� ���� Ŭ������ ���� Ŭ������ �Ӽ��� ����� 
	// �� ������, ���� Ŭ������ ���� Ŭ������ �޸𸮸� ������ ���·�
	// �޸��� ũ�Ⱑ �����˴ϴ�.

#pragma endregion

#pragma region ���� ���
	// �ϳ��� ���� Ŭ������ ���� ���� ���� Ŭ������
	// ��ӹ޴� ���Դϴ�.

	// Computer computer;
	// 
	// computer.Use();

	// ���� ����� ���� ���� ���� Ŭ������ �ߺ��Ǵ� �Ӽ���
	// ������ �� �ֱ� ������ ���� ���� �����ڸ� ���� ����
	// Ŭ������ �̸��� �����ϰ� �Ӽ��� ����ؾ� �մϴ�.
#pragma endregion

#pragma region ���� ���� �Ű� ����

	// Debug(1, 10);
	// 
	// cout << endl;
	// 
	// Debug(2, 10, 20);
	// 
	// cout << endl;
	// 
	// Debug(3, 10, 20, 30);
	// 
	// cout << endl;
	// 
	// Debug(4, 10, 20, 30, 40);
	// 
	// cout << endl;
	// 
	// Debug(5, 10, 20, 30, 40, 50);

#pragma endregion




	return 0;
}