#include <iostream>
#include <memory>
// 메모리를 선언해야 스마트 포인터를 사용가능하다.
using namespace std;

// 다 템플릿을 사용해서 만들어짐
// File, Player이라는 클래스를 타입으로 들고와서 내부에 있
// unique_ptr<File>
// shared_ptr<Player>
// make_shared<Player>

#pragma region RAII 패턴
// 자원의 안전한 사용을 위해 객체가
// 쓰이는 범위를 벗어나게 되면 자원을
// 해제해주는 기법입니다.

// unique 포인터에 사용된 File 클래스
class File
{
public:
	File()
	{
		cout << "Create File" << endl;
	}

	~File()
	{
		cout << "Release File" << endl;
	}

};

// shared 포인터에 사용된 Player 클래스
class Player
{
#pragma region weak 포인터
	// 자신이 참조하고 있는 원시 포인터의 강한 참조 카운트가 0이 되면
	// expired 라는 상태가 되는데, 이는 원시 포인터의 참조 카운트가 0이
	// 되어 메모리가 해제되었으므로, 이 원시 포인터를 소유한 weak 포인터를
	// 유효하지 않다고 판단하여 해제하는 포인터입니다.
#pragma endregion

private:
	weak_ptr<Player> partner;
	// shared_ptr<Player> partner;

public:
	Player()
	{
		cout << "Create Player" << endl;
	}
	~Player()
	{
		cout << "Release Player" << endl;
	}

	// void SetPartner(shared_ptr<Player> partner)
	// {
	// 	this->partner = partner;
	// 
	// }
	void SetPartner(weak_ptr<Player> partner)
	{
		this->partner = partner;

	}
};

#pragma endregion
int main()
{
#pragma region unique 포인터
	// // 단, 하나의 객체만 가리킬 수 있는 스마트 포인터입니다.
	// std::unique_ptr<File> uniquePtr1(new File());
	// 
	// cout << "uniquePtr1의 값 : " << uniquePtr1 << endl;
	// 
	// std::unique_ptr<File> uniquePtr2 = std::make_unique<File>();
	// 
	// cout << "uniquePtr2의 값 : " << uniquePtr2 << endl;
	// 
	// //	unique_ptr<File> uniquePtr3;	// 일반 포인터
	// // 하나의 unique 포인터는 하나의 객체만 가질 수 있습니다.
	// // 하지만, 객체에 대한 소유권을 move함수를 이용하여
	// // 이전하는 것이 가능합니다.
	// unique_ptr<File> uniquePtr3 = move(uniquePtr2);
	// 
	// cout << "uniquePtr2의 값 : " << uniquePtr2 << endl;
	// cout << "uniquePtr3의 값 : " << uniquePtr3 << endl;

#pragma endregion

// 메모리 보는 방법 
// int * ptr = new int(10);
#pragma region shared 포인터
	// 하나의 객체에 여러 개의 포인터가 공유할 수 있으며(얕은 복사),
	// 공유할 때마다 참조 카운트를 이용해서 메모리를 관리하는 스마트 포인터입니다.

	// shared_ptr<Player> player1 = make_shared<Player>();
	// 
	// {
	// 	shared_ptr<Player> player2 = player1;
	// 
	// 	cout << "player1의 참조 횟수 : " << player1.use_count() << endl;
	// 	cout << "player2의 참조 횟수 : " << player2.use_count() << endl;
	// }
	// // 중괄호 안에서 선언한 player2의 포인터가 중괄호가 끝남과 동시에 해제된다. 
	// // player1의 포인터는 중괄호 바깥에서 선언했으므로 아래에서도 실행함과 동시에
	// // counting 된다.
	// cout << "player1의 참조 횟수 : " << player1.use_count() << endl;
	//-------------------------------------------------------------------------------*
	// // weak_ptr
	// // shared_ptr의 단점 : 각 player 포인터가 가리키는 힙 영역의 메모리에서 
	// //					 서로 참조하고 있는 값이 있는 경우 player 포인터를 해제해도
	// //					 count가 1로 유지되어 포인터가 해제되더라도 메모리는 남게되는 단점이 있다.
	// shared_ptr<Player> player1 = make_shared<Player>();
	// shared_ptr<Player> player2 = make_shared<Player>();
	// 
	// cout << "player1의 참조 횟수 : " << player1.use_count() << endl;
	// cout << "player2의 참조 횟수 : " << player2.use_count() << endl;
	// 
	// player1->SetPartner(player2);
	// player2->SetPartner(player1);

#pragma endregion

	return 0;
}