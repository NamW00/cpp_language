#include <iostream> 
#include <vector> // vector�� ����� �� �����ϴ� �������
#include <time.h>
#include <conio.h>
#include <Windows.h>
#include <deque> // Deque�� ����� �� �����ϴ� �������

using namespace std;

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80


int main()
{
#pragma region ���� �����̳�
	// �����͸� �������� �����ϸ�, Ư���� �����̳� ��Ģ��
	// ���� �Ϲ����� �����̳��Դϴ�.
#pragma endregion
#pragma region Vector
	//  std::vector<int> vector;
	//  
	//  vector.reserve(10); // vector.capacity�� ���� ó������ ������ �ϰ� ������(�޸� ����ȭ ���� �������ؼ�)
	//  
	//  // push_back : Vector �����̳� �ڿ� ������ ���� �־��ݴϴ�.
	//  // [10] [20] [30] [40] [50] -> vector.size : 5, vector.capacity : 6
	//  // ���� capacity�� 1.5�質 2�辿 �þ��.(���⼭�� 1.5�谡 �þ)
	//  // [1] [1.5] [3] [4.5] [6]
	//  
	//  vector.push_back(10);
	//  
	//  cout << "vector.capacity : " << vector.capacity() << endl;
	//  cout << "vector.size : " << vector.size() << endl;
	//  
	//  vector.push_back(20);
	//  vector.push_back(30);
	//  vector.push_back(40);
	//  vector.push_back(50);
	//  
	//  
	//  cout << "vector.capacity : " << vector.capacity() << endl;
	//  cout << "vector.size : " << vector.size() << endl;
	//  
	//  
	//  
	//  for (int i = 0; i < vector.size(); i++)
	//  {
	//  	cout << vector[i] << " ";
	//  }
	//  
	//  vector.pop_back();
	//  vector.pop_back();
	//  vector.pop_back();
	//  
	//  cout << endl;
	//  
	//  for (int i = 0; i < vector.size(); i++)
	//  {
	//  	cout << vector[i] << " ";
	//  }
	//  
	//  cout << endl;
	//  cout << "vector.size : " << vector.size() << endl;
	//  cout << "vector.capacity : " << vector.capacity() << endl;
#pragma endregion
#pragma region Rhythm Game

	// srand(time(NULL));
	// int createCount = 5;
	// int lifeCount = 5;
	// std::vector<const char*> note;
	// std::vector<const char*> life;
	// 
	// // 1. Note�� �����մϴ�.
	// for (int i = 0; i < createCount; i++)
	// {
	// 	// 2. ������ Note�� �����մϴ�.
	// 	// �� �� �� ��
	// 	int random = rand() % 4;
	// 
	// 	switch (random)
	// 	{
	// 	case 0: note.push_back("��"); // UP 72
	// 		break;
	// 	case 1: note.push_back("��"); // LEFT 75
	// 		break;
	// 	case 2: note.push_back("��"); // RIGHT 77
	// 		break;
	// 	case 3: note.push_back("��"); // DOWN 80
	// 		break;
	// 	}
	// }
	// for (int i = 0; i < lifeCount; i++)
	// {
	// 	life.push_back("��");
	// }
	// 
	// char key = 0;
	// 
	// // 3. ������ ���� ������ �����մϴ�.
	// while (note.empty() == false)
	// {
	// 	cout << "Life : ";
	// 	for (int i = 0; i < lifeCount; i++)
	// 	{
	// 		cout << life[i];
	// 	}
	// 	cout << endl;
	// 	// 4. Note�� ����մϴ�.
	// 	for (int i = 0; i < note.size(); i++)
	// 	{
	// 		cout << note[i] << " ";
	// 	}
	// 
	// 	// 5. key �Է��� �޽��ϴ�.
	// 	key = _getch();
	// 	if (key == -32)
	// 	{
	// 		key = _getch();
	// 	}
	// 
	// 	// 6. ���� ������ key�� �´ٸ� Note�� �����մϴ�.
	// 	switch (key)
	// 	{
	// 	case UP: 
	// 		if (note[note.size() - 1] == "��") { note.pop_back(); }
	// 		else { lifeCount--; }
	// 		break;
	// 	case LEFT: if (note[note.size() - 1] == "��") { note.pop_back(); }
	// 		else { lifeCount--; }
	// 		break;
	// 	case RIGHT: if (note[note.size() - 1] == "��") { note.pop_back(); }
	// 		else { lifeCount--; }
	// 		break;
	// 	case DOWN: if (note[note.size() - 1] == "��") { note.pop_back(); }
	// 		else { lifeCount--; }
	// 		break;
	// 	}
	// 	if (lifeCount == 0 )
	// 	{
	// 		break;
	// 	}
	// 	// 7. ȭ���� ��ü �����ݴϴ�.
	// 	system("cls");
	// }
	// if (lifeCount == 0) 
	// {
	// 	system("cls");
	// 	cout << "Game Over~!" << endl;
	// }
	// else
	// {
	// 	system("cls");
	// 	cout << "Game Clear~!" << endl;
	// }


#pragma endregion
#pragma region Deque
	// std::deque<int> deque;
	// 
	// deque.push_front(10);
	// deque.push_back(5);
	// 
	// deque.push_front(9);
	// deque.push_back(11);
	// 
	// deque.push_front(8);
	// deque.push_back(13);
	// 
	// for (int i = 0; i < deque.size(); i++)
	// {
	// 	cout << "deque�� [" << i << "] : " << deque[i] << endl;
	// }
	// 
	// deque.pop_front();
	// deque.pop_back();
	// 
	// cout << "-----------------------------------------*" << endl;
	// for (int i = 0; i < deque.size(); i++)
	// {
	// 	cout << "deque�� [" << i << "] : " << deque[i] << endl;
	// }
#pragma endregion
	return 0;
}