#include <iostream>
#include <list>
#include <string>
using namespace std;



int main()
{
#pragma region �ݺ���
	// std::list<int> list;
	// // [80] [70] [60] [10] [20] [30]
	// list.push_back(10);
	// list.push_back(20);
	// list.push_back(30);
	// list.push_front(60);
	// list.push_front(70);
	// list.push_front(80);
	// 
	// std::list<int>::iterator iterator; // iterator �����ϴ� ���
	// 
	// iterator = list.begin(); // list�� �����ּҸ� ����Ű�� ������
	// 
	// 
	// list.insert(++iterator, 100);
	// 
	// list.insert(list.begin(), 100);
	// 
	// // Ư�� �ε����� ���� �����ϰ� �ʹٸ� for���� �̿��Ͽ� �����Ͽ� �����Ѵ�.
	// 
	// list.erase(list.begin());
	// 
	// for (std::list<int>::iterator iterator = list.begin(); iterator != list.end(); iterator++)
	// {
	// 	cout << "list�� �� : " << *iterator << endl;
	// }
#pragma endregion
#pragma region String

	// std::string content; // content�� ������
	// 
	// content = "Hello World~";
	// 
	// cout << content << endl;
	// 
	// content.append(" Continue");
	// 
	// cout << content << endl;

#pragma endregion
#pragma region �ִ�����

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
	// cout << "�ִ� ����� : " << result << endl;

#pragma endregion

	return 0;
}
