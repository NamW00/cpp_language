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
#pragma region 가상 상속
	// Soup soup;
#pragma endregion

#pragma region 등차수열
	// int firstTerm;		  // 첫째항
	// int commonDifferent;  // 공차
	// int n;				  // 반복 횟수
	// 
	// cout << "첫 항의 값 입력 : ";
	// cin >> firstTerm;
	// 
	// cout << "공차의 값 입력 : ";
	// cin >> commonDifferent;
	// 
	// cout << "반복 횟수 입력 : ";
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