#include <iostream>
using namespace std;
#include "Vulture.h"
#include "Siege_Tank.h"
#include "Goliath.h"

int main()
{
#pragma region 가상 함수
	// 상속하는 클래스 내에서 같은 형태의 함수로
	// 재정의 될 수 있는 함수입니다.
	
	// Mechanic* machanic = new Vulture();
	// 
	// machanic->Move();
	// Mechanic* machanic = new Seige_Tank();
	// 
	// machanic->Move();
	// 
	// // 가상 함수 실행 시간에 상위 클래스에 대한 참조로
	// // 하위 클래스에 재정의된 함수를 호출할 수 있습니다.
	// 
	// cout << "Mechanic의 크기 : " << sizeof(Mechanic) << endl;

#pragma endregion
#pragma region Factory
	
	Mechanic* machanic;
	
	int countUnit = 0;


	
	while (countUnit < 5)
	{
		int numUnit = 0;
		cin >> numUnit;
		if (numUnit < 3)
		{
			switch (numUnit)
			{
			case 0:
				machanic = new Vulture();
			case 1:
				machanic = new Siege_Tank();
			case 2:
				machanic = new Goliath();
			default:
				break;
			}

		}
		else
		{
			countUnit--;
			break;
		}
		countUnit++;
	}
	


#pragma endregion


	return 0;
}