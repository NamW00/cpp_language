#include <iostream>
using namespace std;

#pragma region 클래스
// 사용자 정의 데이터 유형으로 속성과 함수가 포함
// 되어 있으며, 클래스를 통해 객체를 생성하여 접근
// 하여 사용할 수 있는 집합체입니다.

class GameObject
{
#pragma region 접근 지정자

	// 클래스 내부의 포함되어 있는 속성에 접근 범위를
	// 제한하는 지정자입니다.

	// public : 클래스 내부에 있는 데이터를 클래스 외부와 자기가
	//			상속하고 있는 클래스에서도 접근을 허용하는 지정자입니다.

	// protected : 클래스 내부에 있는 데이터를 클래스 내부와 자기가 상속하고
	//			   있는 클래스에서만 접근을 허용하는 지정자입니다.

	// private : 클래스 내부에 있는 데이터를 클래스 내부에서만 접근을 
	//			 허용하는 지정자입니다.

#pragma endregion

	int x = 5;
private:
	int y = 10;
protected:
	int z = 15;
public:
	void Information()
	{
		cout << "x의 값 : " << x << endl;
		cout << "y의 값 : " << y << endl;
		cout << "z의 값 : " << z << endl;
	}
};

#pragma endregion



class Item
{
#pragma region 생성자
public:
	// 생성자의 경우 객체가 생성될 때 단 한 번만 호출되며,
	// 생성자는 반환형이 존재하지 않기 때문에 생성자가 호출되기
	// 전에는 객체에 대한 메모리는 할당하지 않습니다.
	Item()
	{
		cout << "Create Item" << endl;
	}
#pragma endregion
#pragma region 소멸자
	// 객체가 소멸될 때 자동으로 실행되는 클래스의 멤버 함수입니다.

	~Item()
	{
		cout << "Release Item" << endl;
	}

	// 소멸자는 객체가 메모리에서 해제될 때 단 한 번만
	// 호출되며, 소멸자에는 매개 변수를 생성하여 사용할
	// 수 없습니다.

#pragma endregion

};


int main()
{
#pragma region 클래스
	// // 스택에 생성
	// GameObject gameObject;
	// 
	// cout << "GameObject의 크기 : " << sizeof(gameObject) << endl;
	// 
	// gameObject.Information();
	// 
	// // 힙에 생성
	// GameObject * pointer = new GameObject;
	// 
	// pointer->Information(); 
#pragma endregion
#pragma region 생성자
	// 클래스의 인스턴스가 생성되는 시점에서 자동으로
	// 호출되는 특수한 멤버 함수입니다.

	// main함수안에서 선언되었으므로 지역변수로 처리되어서 Stack에 저장
	// 소멸자 같은 경우 main함수 종료후 실행
	Item item;

	// Item 계속 Heap에 남아있으므로 delete해서 해제시켜줘야한다.
	Item* itemPtr = new Item;

	delete itemPtr;

#pragma endregion

	return 0;
}
