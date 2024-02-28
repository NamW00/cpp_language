#include <iostream>
using namespace std;

class Food
{
public:
	Food()
	{
		cout << "Create Food" << endl;
	}

	~Food()
	{
		cout << "Release Food" << endl;
	}

};

class Meat : public virtual Food
{
public:
	Meat()
	{
		cout << "Create Meat" << endl;
	}

	~Meat()
	{
		cout << "Release Meat" << endl;
	}
};

class Vegetable : public virtual Food
{
public:
	Vegetable()
	{
		cout << "Create Vegetable" << endl;
	}

	~Vegetable()
	{
		cout << "Release Vegetable" << endl;
	}
};

class Soup : public Meat, public Vegetable
{
public:
	Soup()
	{
		cout << "Create Soup" << endl;
	}

	~Soup()
	{
		cout << "Release Soup" << endl;
	}
};
int main()
{
#pragma region ���� ���
	// Soup soup;
#pragma endregion

#pragma region ��������
	// int firstTerm;		  // ù°��
	// int commonDifferent;  // ����
	// int n;				  // �ݺ� Ƚ��
	// 
	// cout << "ù ���� �� �Է� : ";
	// cin >> firstTerm;
	// 
	// cout << "������ �� �Է� : ";
	// cin >> commonDifferent;
	// 
	// cout << "�ݺ� Ƚ�� �Է� : ";
	// cin >> n;
	// 
	// for (int i = 0; i < n; i++)
	// {
	// 	cout << firstTerm << " ";
	// 
	// 	firstTerm += commonDifferent;
	// }
#pragma endregion


	return 0;
}