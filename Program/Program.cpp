#include <iostream>
using namespace std;

class Object
{
private:
	int width;	// -> �����ִ� width, height�� �������
	int height;

public:
	//	Object()	// �⺻ ������
	//	{
	//		cout << "Create Object" << endl;
	//	}
	Object(int width, int height)	// -> �����ִ� width, height�� �Ű�����
	{
		// this �����ʹ� �ڱ��ڽ��� ����Ű�� �������Դϴ�.
		this->width = width;
		this->height = height;
	}

	Object(Object & object)	// ���� ������
	{
		cout << "Copy Constrator" << endl;
	}

	void Adress()
	{
		cout << this << endl;
	}
	Object This()
	{
		return *this;	// �����Ѵٴ� �������� ��������.
	}

};
int main() 
{
#pragma region ���� ������
	// ���� ��ü�� �����Ͽ� ������ų �� ȣ��Ǵ� �������Դϴ�.
	// -> Stack�� ����

	// Object object1();	// �⺻ ������ ȣ�� -> "Create Object"ȣ��
	
	// Object object1(10, 20);	
	// 
	// object1.Adress();
	// 
	// 
	// Object object2 = object1;	// ���� ������ ȣ�� -> "Copy Constrator"ȣ��
	// 
	// object2.Adress();
	
	// ���� �����ڸ� �������� �ʰ� ��ü�� �����ϰ� �Ǹ�
	// �⺻ ���� �����ڰ� ȣ��Ǳ� ������ ���� ����� ��ü�� ���� �˴ϴ�.
#pragma endregion
#pragma region ���� ����

	// ��ü�� ������ �� �ּ� ���� �����Ͽ� ���� �޸𸮸� ����Ű�� ����

	 // int* ptr1 = new int;
	 // 
	 // int* ptr2 = ptr1;
	 // 
	 // cout << "ptr1�� �� : " << ptr1 << endl;
	 // cout << "ptr2�� �� : " << ptr2 << endl;
	 // 
	 // 
	 // // ���� ������ ��� ���� ��ü�� ���� ���� �޸� ������
	 // // �����ϰ� �ֱ� ������ �ϳ��� ��ü�� ���� �����ϰ� �Ǹ�
	 // // ���� ������ ��ü�� �Բ� ������ �ް� �˴ϴ�.
	 // 
	 // 
	 // *ptr1 = 999;
	 // 
	 // cout << "ptr1�� ����Ű�� �� : " << *ptr1 << endl;
	 // cout << "ptr2�� ����Ű�� �� : " << *ptr2 << endl;
	  
	 //delete ptr2;

	 // ���� ����� ��ü�� �޸𸮿��� ������ �� �������� ���� ������
	 // �ݴ�� �Ҹ��ڰ� ȣ��Ǳ� ������ ������ ��ü�� ���� �����ǹǷ�,
	 // ���� �ִ� ��ü�� ������ �� �̹� ������ �޸𸮿� �����ϰ� �˴ϴ�.

#pragma endregion
#pragma region ���� ����

	// ��ü�� ������ ��, ���� ���� �ƴ� �ν��Ͻ�
	// ��ü�� ���� �����Ͽ� ���� �ٸ� �޸𸮸�
	// �����ϴ� �����Դϴ�.

	
	// int* ptr1 = new int;
	// int* ptr2 = new int;	
	// // ���� ptr1�� �޸� ������ ������ ptr2���� �޸� ������ ����
	// 
	// cout << "ptr1�� �� : " << ptr1 << endl;
	// cout << "ptr2�� �� : " << ptr2 << endl;
	// 
	// *ptr1 = 100;
	// *ptr2 = 200;
	// 
	// cout << "ptr1�� ����Ű�� �� : " << *ptr1 << endl;
	// cout << "ptr2�� ����Ű�� �� : " << *ptr2 << endl;
	// 
	// delete ptr1;
	// delete ptr2;
	
#pragma endregion

	return 0;
}