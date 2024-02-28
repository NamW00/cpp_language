#include <iostream>
using namespace std;
#include "../Program/LinkedList.h"
#include "../Program/Bank.h"
#include "../Program/Character.h" // Bank에서 character 정보를 가져오니까 굳이 따로 선언하지 않아도 된다.

template <typename T>
void Calculator(T x, T y)
{
	cout << "x + y = " << x + y << endl;
}
template <>	//템플릿의 특수화 char type을 그대로 출력하고 싶다면
void Calculator(char x, char y)
{
	cout << "x의 값 : " << x << endl;
	cout << "y의 값 : " << y << endl;
}

int main()
{
#pragma region 템플릿
	// 데이터 형식에 의존하지 않고, 하나의 값이 여러
	// 다른 데이터 타입들을 가질 수 있는 기술에 중점을
	// 두어 재사용성을 높일 수 있는 기술입니다.


	// Calculator(10, 20);
	// Calculator(10.5f, 27.6f);
	// Calculator(20.64, 30.52);
	// 
	// Calculator('A', 'Z');

	// 클래스 템플릿 : 헤더파일에 정의한 클래스들을 템플릿을 이용하여 사용

	// LinkedList<int> linkedList;
	// 
	// linkedList.Push(1000);
	// 
	// cout << linkedList.GetData() << endl;
#pragma endregion

#pragma region Friend
	// Friend로 선언된 클래스의 private 및 protected 멤버에
	// 접근할 수 있도록 설정해주는 기능입니다.
	// 캡슐화를 무시(OOP개념을 위배하는)하는 방식이다.

	// Character character;
	// character.Show();
	// 
	// Bank bank;
	// bank.Withdrawal(character, 15000);
	// 
	// bank.Show();
	// character.Show();
#pragma endregion

#pragma region 등비수열
	// int firstTerm = 2;	// 첫째항
	// int different = 5;  // 공비
	// int n = 6;			// 반복 횟수
	// 
	// cout << "첫 항의 값 입력 : ";
	// cin >> firstTerm;
	// 
	// cout << "공비의 값 입력 : ";
	// cin >> different;
	// 
	// cout << "반복 횟수 입력 : ";
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