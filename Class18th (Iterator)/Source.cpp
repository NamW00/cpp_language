#include <iostream>
#include <list>
#include <string>
using namespace std;



int main()
{
#pragma region 반복자
	// std::list<int> list;
	// // [80] [70] [60] [10] [20] [30]
	// list.push_back(10);
	// list.push_back(20);
	// list.push_back(30);
	// list.push_front(60);
	// list.push_front(70);
	// list.push_front(80);
	// 
	// std::list<int>::iterator iterator; // iterator 선언하는 방법
	// 
	// iterator = list.begin(); // list의 시작주소를 가리키는 포인터
	// 
	// 
	// list.insert(++iterator, 100);
	// 
	// list.insert(list.begin(), 100);
	// 
	// // 특정 인덱스에 값을 삽입하고 싶다면 for문을 이용하여 접근하여 삽입한다.
	// 
	// list.erase(list.begin());
	// 
	// for (std::list<int>::iterator iterator = list.begin(); iterator != list.end(); iterator++)
	// {
	// 	cout << "list의 값 : " << *iterator << endl;
	// }
#pragma endregion
#pragma region String

	// std::string content; // content는 변수명
	// 
	// content = "Hello World~";
	// 
	// cout << content << endl;
	// 
	// content.append(" Continue");
	// 
	// cout << content << endl;

#pragma endregion
#pragma region 최대공약수

	// int firstValue = 0;
	// int secondValue = 0;
	// int bigValue = 0;
	// cout << "FirstValue : ";
	// cin >> firstValue;
	// cout << "SecondValue : ";
	// cin	>> secondValue;
	// 
	// int result = 0;
	// 
	// for (int i = 1; i <= firstValue && i <= secondValue; i++)
	// {
	// 	if (firstValue % i == 0 && secondValue % i == 0)
	// 	{
	// 		result = i;
	// 	}
	// }
	// 
	// cout << "최대 공약수 : " << result << endl;

#pragma endregion

	return 0;
}
