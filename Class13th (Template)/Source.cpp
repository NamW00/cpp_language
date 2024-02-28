#include <iostream>
using namespace std;
#include "../Program/LinkedList.h"
#include "../Program/Bank.h"
#include "../Program/Character.h" // Bank���� character ������ �������ϱ� ���� ���� �������� �ʾƵ� �ȴ�.

template <typename T>
void Calculator(T x, T y)
{
	cout << "x + y = " << x + y << endl;
}
template <>	//���ø��� Ư��ȭ char type�� �״�� ����ϰ� �ʹٸ�
void Calculator(char x, char y)
{
	cout << "x�� �� : " << x << endl;
	cout << "y�� �� : " << y << endl;
}

int main()
{
#pragma region ���ø�
	// ������ ���Ŀ� �������� �ʰ�, �ϳ��� ���� ����
	// �ٸ� ������ Ÿ�Ե��� ���� �� �ִ� ����� ������
	// �ξ� ���뼺�� ���� �� �ִ� ����Դϴ�.


	// Calculator(10, 20);
	// Calculator(10.5f, 27.6f);
	// Calculator(20.64, 30.52);
	// 
	// Calculator('A', 'Z');

	// Ŭ���� ���ø� : ������Ͽ� ������ Ŭ�������� ���ø��� �̿��Ͽ� ���

	// LinkedList<int> linkedList;
	// 
	// linkedList.Push(1000);
	// 
	// cout << linkedList.GetData() << endl;
#pragma endregion

#pragma region Friend
	// Friend�� ����� Ŭ������ private �� protected �����
	// ������ �� �ֵ��� �������ִ� ����Դϴ�.
	// ĸ��ȭ�� ����(OOP������ �����ϴ�)�ϴ� ����̴�.

	// Character character;
	// character.Show();
	// 
	// Bank bank;
	// bank.Withdrawal(character, 15000);
	// 
	// bank.Show();
	// character.Show();
#pragma endregion

#pragma region ������
	// int firstTerm = 2;	// ù°��
	// int different = 5;  // ����
	// int n = 6;			// �ݺ� Ƚ��
	// 
	// cout << "ù ���� �� �Է� : ";
	// cin >> firstTerm;
	// 
	// cout << "������ �� �Է� : ";
	// cin >> different;
	// 
	// cout << "�ݺ� Ƚ�� �Է� : ";
	// cin >> n;
	// 
	// for (int i = 0; i < n; i++)
	// {
	// 	cout << firstTerm << " ";
	// 
	// 	firstTerm *= different;
	// }
#pragma endregion

	return 0;
}