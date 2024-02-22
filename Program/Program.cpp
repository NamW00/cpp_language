#include <iostream>
#include "../Program/Beacon.h"
#include "../Program/Hydra.h"
#include "../Program/Juggling.h"
#include "../Program/Lurker.h"

using namespace std;

int main() 
{
#pragma region 업 캐스팅

	Zerg* zerg = nullptr;

	
	int countUnit = 0;
	int numUnit = 0;
	
	
	while (countUnit < 10)
	{

		cout << "현재 회복된 유닛 수 : " << countUnit << "마리" << endl;
		cout << "0 ~ 2 사이의 값을 입력해 주세요 : ";
		
	
		cin >> numUnit;
		if (numUnit < 3)
		{
			switch (numUnit)
			{
			case 0:
				zerg = new Juggling();
				
				break;
			case 1:
				zerg = new Hydra();
				
				break;
			case 2:
				zerg = new Lurker();
				break;
			default:
				break;
			}
		}
		else
		{
			continue;
		}
		countUnit++;
		
	}
	


#pragma endregion


	return 0;
}