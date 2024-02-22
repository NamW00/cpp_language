#include <iostream>
using namespace std;
#include "../Program/Vulture.h"
#include "../Program/Siege_Tank.h"
#include "../Program/Goliath.h"

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
	// 	cout << "현재 생성된 유닛 수 : " << countUnit << "마리" << endl;
	// 	cout << "0 ~ 2 사이의 값을 입력해 주세요 : ";
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
	// cout << "생성된 유닛 종류" << endl;
	// cout << "Vulture : " << numVulture << "마리" << endl;
	// cout << "Siege_Tank : "<< numSiege_Tank << "마리" << endl;
	// cout << "Goliath : " << numGoliath << "마리" << endl;
	// cout << "더 이상 생성할 수 없습니다." << endl;

#pragma endregion
#pragma region 가상 소멸자
	// 객체가 소멸될 때 현재 참조하고 있는 객체와 상관없이
	// 모두 호출되는 소멸자입니다.

	// Mechanic* unit1 = new Vulture();
	// 
	// delete unit1;

	// 상속된 객체가 해제될 때 하위 클래스의 소멸자가 먼저
	// 실행되고 상위 클래스의 소멸자가 실행되어야 하기 때문에
	// 실행 시간에 메모리에 할당된 객체를 확인하고 차례대로
	// 소멸시켜야 합니다.

#pragma endregion
	return 0;
}