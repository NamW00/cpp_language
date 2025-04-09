#include <iostream>

using namespace std;



int main()
{
#pragma region 스트림
	// 시간의 흐름에 따라 연속적으로 발생하는 데이터의 흐름입니다.

	/*
	std::cout << "Hello World" << std::endl;

	int data = 0;

	std::cout << "data 변수의 값 입력 : ";
	std::cin >> data;

	std::cout << "data 변수의 값 : " << data << std::endl;
	*/

	// 스트림은 운영체제에 의해 생성되며, 스트림 자체에 버퍼라는
	// 임시 메모리 공간이 존재합니다.
#pragma endregion
#pragma region 동적 할당
	// 프로그램을 실행 중에 필요한 만큼 메모리를
	// 할당하는 작업입니다.

	int* ptr = new int;
	*ptr = 30;
	cout << "ptr가 가리키고 있는 메모리 값 : " << * ptr << endl;
	cout << "ptr가 가리키고 있는 메모리 주소 : " << ptr << endl;
	delete ptr;

	int* arr = new int;

	delete[] arr;


#pragma endregion


	return 0;
}
