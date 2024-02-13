#include <iostream>
using namespace std;

#pragma region Ŭ����
// ����� ���� ������ �������� �Ӽ��� �Լ��� ����
// �Ǿ� ������, Ŭ������ ���� ��ü�� �����Ͽ� ����
// �Ͽ� ����� �� �ִ� ����ü�Դϴ�.

class GameObject
{
#pragma region ���� ������

	// Ŭ���� ������ ���ԵǾ� �ִ� �Ӽ��� ���� ������
	// �����ϴ� �������Դϴ�.

	// public : Ŭ���� ���ο� �ִ� �����͸� Ŭ���� �ܺο� �ڱⰡ
	//			����ϰ� �ִ� Ŭ���������� ������ ����ϴ� �������Դϴ�.

	// protected : Ŭ���� ���ο� �ִ� �����͸� Ŭ���� ���ο� �ڱⰡ ����ϰ�
	//			   �ִ� Ŭ���������� ������ ����ϴ� �������Դϴ�.

	// private : Ŭ���� ���ο� �ִ� �����͸� Ŭ���� ���ο����� ������ 
	//			 ����ϴ� �������Դϴ�.

#pragma endregion

	int x = 5;
private:
	int y = 10;
protected:
	int z = 15;
public:
	void Information()
	{
		cout << "x�� �� : " << x << endl;
		cout << "y�� �� : " << y << endl;
		cout << "z�� �� : " << z << endl;
	}
};

#pragma endregion



class Item
{
#pragma region ������
public:
	// �������� ��� ��ü�� ������ �� �� �� ���� ȣ��Ǹ�,
	// �����ڴ� ��ȯ���� �������� �ʱ� ������ �����ڰ� ȣ��Ǳ�
	// ������ ��ü�� ���� �޸𸮴� �Ҵ����� �ʽ��ϴ�.
	Item()
	{
		cout << "Create Item" << endl;
	}
#pragma endregion
#pragma region �Ҹ���
	// ��ü�� �Ҹ�� �� �ڵ����� ����Ǵ� Ŭ������ ��� �Լ��Դϴ�.

	~Item()
	{
		cout << "Release Item" << endl;
	}

	// �Ҹ��ڴ� ��ü�� �޸𸮿��� ������ �� �� �� ����
	// ȣ��Ǹ�, �Ҹ��ڿ��� �Ű� ������ �����Ͽ� �����
	// �� �����ϴ�.

#pragma endregion

};


int main()
{
#pragma region Ŭ����
	// // ���ÿ� ����
	// GameObject gameObject;
	// 
	// cout << "GameObject�� ũ�� : " << sizeof(gameObject) << endl;
	// 
	// gameObject.Information();
	// 
	// // ���� ����
	// GameObject * pointer = new GameObject;
	// 
	// pointer->Information(); 
#pragma endregion
#pragma region ������
	// Ŭ������ �ν��Ͻ��� �����Ǵ� �������� �ڵ�����
	// ȣ��Ǵ� Ư���� ��� �Լ��Դϴ�.

	// main�Լ��ȿ��� ����Ǿ����Ƿ� ���������� ó���Ǿ Stack�� ����
	// �Ҹ��� ���� ��� main�Լ� ������ ����
	Item item;

	// Item ��� Heap�� ���������Ƿ� delete�ؼ� ������������Ѵ�.
	Item* itemPtr = new Item;

	delete itemPtr;

#pragma endregion

	return 0;
}
