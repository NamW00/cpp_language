#include <iostream>
using namespace std;
#include "../Program/Vulture.h"
#include "../Program/Siege_Tank.h"
#include "../Program/Goliath.h"

int main()
{
#pragma region ���� �Լ�
	// ����ϴ� Ŭ���� ������ ���� ������ �Լ���
	// ������ �� �� �ִ� �Լ��Դϴ�.

	// Mechanic* machanic = new Vulture();
	// 
	// machanic->Move();
	// Mechanic* machanic = new Seige_Tank();
	// 
	// machanic->Move();
	// 
	// // ���� �Լ� ���� �ð��� ���� Ŭ������ ���� ������
	// // ���� Ŭ������ �����ǵ� �Լ��� ȣ���� �� �ֽ��ϴ�.
	// 
	// cout << "Mechanic�� ũ�� : " << sizeof(Mechanic) << endl;

#pragma endregion
#pragma region Factory

	// Mechanic* mechanic = nullptr;
	// 
	// int countUnit = 0;
	// int numUnit = 0;
	// int numVulture = 0;
	// int numSiege_Tank = 0;
	// int numGoliath = 0;
	// 
	// 
	// while (countUnit < 5)
	// {
	// 	cout << "���� ������ ���� �� : " << countUnit << "����" << endl;
	// 	cout << "0 ~ 2 ������ ���� �Է��� �ּ��� : ";
	// 	
	// 
	// 	cin >> numUnit;
	// 	if (numUnit < 3)
	// 	{
	// 		switch (numUnit)
	// 		{
	// 		case 0:
	// 			mechanic = new Vulture();
	// 			mechanic->Move();
	// 			numVulture++;
	// 			break;
	// 		case 1:
	// 			mechanic = new Siege_Tank();
	// 			mechanic->Move();
	// 			numSiege_Tank++;
	// 			break;
	// 		case 2:
	// 			mechanic = new Goliath();
	// 			mechanic->Move();
	// 			numGoliath++;
	// 			break;
	// 		default:
	// 			break;
	// 		}
	// 	}
	// 	else
	// 	{
	// 		continue;
	// 	}
	// 	countUnit++;
	// 	
	// }
	// cout << endl;
	// cout << "������ ���� ����" << endl;
	// cout << "Vulture : " << numVulture << "����" << endl;
	// cout << "Siege_Tank : "<< numSiege_Tank << "����" << endl;
	// cout << "Goliath : " << numGoliath << "����" << endl;
	// cout << "�� �̻� ������ �� �����ϴ�." << endl;

#pragma endregion
#pragma region ���� �Ҹ���
	// ��ü�� �Ҹ�� �� ���� �����ϰ� �ִ� ��ü�� �������
	// ��� ȣ��Ǵ� �Ҹ����Դϴ�.

	// Mechanic* unit1 = new Vulture();
	// 
	// delete unit1;

	// ��ӵ� ��ü�� ������ �� ���� Ŭ������ �Ҹ��ڰ� ����
	// ����ǰ� ���� Ŭ������ �Ҹ��ڰ� ����Ǿ�� �ϱ� ������
	// ���� �ð��� �޸𸮿� �Ҵ�� ��ü�� Ȯ���ϰ� ���ʴ��
	// �Ҹ���Ѿ� �մϴ�.

#pragma endregion
	return 0;
}