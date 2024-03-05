#include <iostream>

void Swap(int firstValue, int secondValue)
{
    int temp = firstValue;

    firstValue = secondValue;

    secondValue = temp;

}

int main()
{
#pragma region 스트림
    /*
    // 시간의 흐름에 따라 연속적으로 발생하는
    // 데이터의 흐름입니다.

     char alphabet = 'A';
     int data = 100;

     std::cout << "data변수의 값 : " << data << std::endl;
     std::cout << "alphabet변수의 값 : " << alphabet << std::endl;



     // 스트림의 경우 입력된 데이터는 출력 장치로 전달하며,
     // "<<" 연산자(삽입연산자)를 사용하여 자신이 참조한 값을 반환하여 출력합니다.

     int selectCount = 0;

     // 스트림으로 입력받을 때 ">>" 연산자를 사용하여 버퍼에 저장한 다음
     // NULL 문자까지만 버퍼 안의 내용을 출력합니다.

     std::cin >> selectCount;

     std::cout << "selectCount의 값 : " << selectCount;

     // 스트림의 운영체제에 의해 생성되며, 스트림 자체에 버퍼라는
     // 임시 메모리 공간이 존재합니다.
     */
#pragma endregion
#pragma region 동적 할당
     // int* ptr = new int;
     // 
     // // 초기화 안했기 때문에 garbage 값이 나옴
     // std::cout << "ptr이 가리키는 값 : " << *ptr << std::endl;
     // 
     // *ptr = 999;
     // 
     // std::cout << "ptr이 가리키는 값 : " << *ptr << std::endl;
     // 
     // delete ptr;

     // int* list = new int[5];
     // 
     // for (int i = 0; i < 5; i++)
     // {
     //     list[i] = 10 + i;
     //     std::cout << "list[" << i << "]의 값 : " << list[i] << std::endl;
     // }
     // 
     // delete [] list;

     // 배열 쓸때 주의
     // delete list; -> 전체 배열이 삭제되는 것이 아니라 시작 주소값에 있는 배열 값만 삭제된다.
     // 나머지 데이터들은 누수된다.
#pragma endregion
#pragma region 참조자

    // int value = 100;
    // 
    // int & ref = value;
    // 
    // std::cout << "ref의 값 : " << ref << std::endl;
    // std::cout << "value의 값 : " << value << std::endl;
    // 
    // ref = 999;
    // 
    // std::cout << "ref의 값 : " << ref << std::endl;
    // std::cout << "value의 값 : " << value << std::endl;

    // int x = 10;
    // int y = 20;
    // 
    // Swap(x, y);
    // 
    // std::cout << "x의 값 : " << x << std::endl;
    // std::cout << "y의 값 : " << y << std::endl;

#pragma endregion
#pragma region 범위 기반 for문

    int dataList[5] = { 1,2,3,4,5 };

    // 읽기전용으로 설정하고 싶을때 dataList 값들을 element로 받을 때 상수로 정의해주면 값 변경을 막을 수 있다.
    // for (const int & element : dataList)
    // {
    // 
    //     std::cout << "element의 값 : " << element << std::endl;
    // }
    // 일반 for문은 배열 인덱스 값으로 접근해서 값 변경이 가능하지만
    // 범위 기반 for문은 특정한 값들을 접근해서 변경할 수가 없다.

#pragma endregion
    return 0;
}