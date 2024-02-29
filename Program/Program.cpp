#include <iostream>
#include <vector> // vector나 Deque를 사용할때 선언하는 헤더파일
#include <time.h>
#include <conio.h>
#include <Windows.h>

using namespace std;

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80


int main()
{
#pragma region 선형 컨테이너
	// 데이터를 선형으로 저장하며, 특별한 제약이나 규칙이
	// 없는 일반적인 컨테이너입니다.

#pragma endregion

#pragma region Vector
	// std::vector<int> vector;
	// 
	// vector.reserve(10); // vector.capacity의 값을 처음부터 고정을 하고 시작함
	// 
	// // push_back : Vector 컨테이너 뒤에 데이터 값을 넣어줍니다.
	// // [10] [20] [30] [40] [50] -> vector.size : 5, vector.capacity : 6
	// // 보통 capacity는 1.5배나 2배씩 늘어난다.(여기서는 1.5배가 늘어남)
	// // [1] [1.5] [3] [4.5] [6]
	// 
	// vector.push_back(10);
	// 
	// cout << "vector.capacity : " << vector.capacity() << endl;
	// cout << "vector.size : " << vector.size() << endl;
	// 
	// vector.push_back(20);
	// vector.push_back(30);
	// vector.push_back(40);
	// vector.push_back(50);
	// 
	// 
	// cout << "vector.capacity : " << vector.capacity() << endl;
	// cout << "vector.size : " << vector.size() << endl;
	// 
	// 
	// 
	// for (int i = 0; i < vector.size(); i++)
	// {
	// 	cout << vector[i] << " ";
	// }
	// 
	// vector.pop_back();
	// vector.pop_back();
	// vector.pop_back();
	// 
	// cout << endl;
	// 
	// for (int i = 0; i < vector.size(); i++)
	// {
	// 	cout << vector[i] << " ";
	// }
	// 
	// cout << endl;
	// cout << "vector.size : " << vector.size() << endl;
	// cout << "vector.capacity : " << vector.capacity() << endl;
#pragma endregion

#pragma region 리듬게임

	srand(time(NULL));

	int life = 5;
	int input;
	std::vector<const char*> note;
	note.reserve(10);
	note.push_back("↑"); // UP 72
	note.push_back("↓"); // DOWN 80
	note.push_back("→"); // RIGHT 77
	note.push_back("←"); // LEFT 75
	
	for (int i = 0; i < note.size(); i++)
	{
		cout << note[i] << " ";
	}
	

	while (note.empty())
	{
		cout << "LIFE : " << life << endl;
		for (int i = 0; i < note.size(); i++)
		{
			cout << note[i] << " ";
		}

		// input = _getch();
		// if (input == 224)
		// {
		// 	input = _getch();
		// }

		
		// if (input = note[note.size()])
		// {
		// 	cout << "LEFT" << endl;
		// 	continue;
		// }
		// else
		// {
		// 	life--;
		// 	continue;
		// }

		
	
	
	
	}

	cout << "Game Clear";

#pragma endregion




	return 0;
}