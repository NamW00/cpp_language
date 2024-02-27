#include <iostream>
#include <memory>
// �޸𸮸� �����ؾ� ����Ʈ �����͸� ��밡���ϴ�.
using namespace std;

// �� ���ø��� ����ؼ� �������
// File, Player�̶�� Ŭ������ Ÿ������ ���ͼ� ���ο� ��
// unique_ptr<File>
// shared_ptr<Player>
// make_shared<Player>

#pragma region RAII ����
// �ڿ��� ������ ����� ���� ��ü��
// ���̴� ������ ����� �Ǹ� �ڿ���
// �������ִ� ����Դϴ�.

// unique �����Ϳ� ���� File Ŭ����
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

// shared �����Ϳ� ���� Player Ŭ����
class Player
{
#pragma region weak ������
	// �ڽ��� �����ϰ� �ִ� ���� �������� ���� ���� ī��Ʈ�� 0�� �Ǹ�
	// expired ��� ���°� �Ǵµ�, �̴� ���� �������� ���� ī��Ʈ�� 0��
	// �Ǿ� �޸𸮰� �����Ǿ����Ƿ�, �� ���� �����͸� ������ weak �����͸�
	// ��ȿ���� �ʴٰ� �Ǵ��Ͽ� �����ϴ� �������Դϴ�.
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
#pragma region unique ������
	// // ��, �ϳ��� ��ü�� ����ų �� �ִ� ����Ʈ �������Դϴ�.
	// std::unique_ptr<File> uniquePtr1(new File());
	// 
	// cout << "uniquePtr1�� �� : " << uniquePtr1 << endl;
	// 
	// std::unique_ptr<File> uniquePtr2 = std::make_unique<File>();
	// 
	// cout << "uniquePtr2�� �� : " << uniquePtr2 << endl;
	// 
	// //	unique_ptr<File> uniquePtr3;	// �Ϲ� ������
	// // �ϳ��� unique �����ʹ� �ϳ��� ��ü�� ���� �� �ֽ��ϴ�.
	// // ������, ��ü�� ���� �������� move�Լ��� �̿��Ͽ�
	// // �����ϴ� ���� �����մϴ�.
	// unique_ptr<File> uniquePtr3 = move(uniquePtr2);
	// 
	// cout << "uniquePtr2�� �� : " << uniquePtr2 << endl;
	// cout << "uniquePtr3�� �� : " << uniquePtr3 << endl;

#pragma endregion

// �޸� ���� ��� 
// int * ptr = new int(10);
#pragma region shared ������
	// �ϳ��� ��ü�� ���� ���� �����Ͱ� ������ �� ������(���� ����),
	// ������ ������ ���� ī��Ʈ�� �̿��ؼ� �޸𸮸� �����ϴ� ����Ʈ �������Դϴ�.

	// shared_ptr<Player> player1 = make_shared<Player>();
	// 
	// {
	// 	shared_ptr<Player> player2 = player1;
	// 
	// 	cout << "player1�� ���� Ƚ�� : " << player1.use_count() << endl;
	// 	cout << "player2�� ���� Ƚ�� : " << player2.use_count() << endl;
	// }
	// // �߰�ȣ �ȿ��� ������ player2�� �����Ͱ� �߰�ȣ�� ������ ���ÿ� �����ȴ�. 
	// // player1�� �����ʹ� �߰�ȣ �ٱ����� ���������Ƿ� �Ʒ������� �����԰� ���ÿ�
	// // counting �ȴ�.
	// cout << "player1�� ���� Ƚ�� : " << player1.use_count() << endl;
	//-------------------------------------------------------------------------------*
	// // weak_ptr
	// // shared_ptr�� ���� : �� player �����Ͱ� ����Ű�� �� ������ �޸𸮿��� 
	// //					 ���� �����ϰ� �ִ� ���� �ִ� ��� player �����͸� �����ص�
	// //					 count�� 1�� �����Ǿ� �����Ͱ� �����Ǵ��� �޸𸮴� ���ԵǴ� ������ �ִ�.
	// shared_ptr<Player> player1 = make_shared<Player>();
	// shared_ptr<Player> player2 = make_shared<Player>();
	// 
	// cout << "player1�� ���� Ƚ�� : " << player1.use_count() << endl;
	// cout << "player2�� ���� Ƚ�� : " << player2.use_count() << endl;
	// 
	// player1->SetPartner(player2);
	// player2->SetPartner(player1);

#pragma endregion

	return 0;
}