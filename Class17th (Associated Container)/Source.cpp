#include <iostream>
#include <list>
#include <map>
#include <set> 
using namespace std;

int main()
{
#pragma region ���� �����̳�
#pragma region List
	// std::list<int> list;
	// 
	// list.push_front(10);
	// list.push_back(5);
	// list.push_back(11);
	// 
	// // list.begin();
	// // list�� ù ��° �ּҸ� ��ȯ�ϴ� �Լ�
	// list.begin();
	// 
	// // list.end();
	// // list�� ������ �� ������ �ִ� �ּҸ� ��ȯ�ϴ� �Լ�
	// 
	// list.end();
	// 
	// // list.sort();
	// // list�� ��� ���Ҹ� ������������ �����ϴ� �Լ�
	// list.sort();
	// 
	// // list.popback();
	// // list�� ���� ������ ���Ҹ� �����մϴ�.
	// list.pop_back();
#pragma endregion
#pragma region Map
	// std::map<const char*, int> map;
	// 
	// map.insert(std::make_pair("Sword", 10000));
	// map.insert(std::make_pair("Guard", 8500));
	// map.insert(std::make_pair("Gloves", 7500));
	// 
	// cout << map["Sword"] << endl; // �̷��� Key���� Ȯ���� �� �ִ�.
	// cout << map["Guard"] << endl;
	// cout << map["Gloves"] << endl;
	// 
	// // map.find()
	// // map���� �ش��ϴ� key�� ������ ���Ҹ� Ž���ϴ� �Լ�
	// // �ش��ϴ� key�� ���� ��� end()�� ��ȯ�մϴ�.
	// map.find("Sword");
	// 
	// // map.count();
	// // map���� �ش� key�� ������ ������ ������ ��ȯ�ϴ� �Լ�
	// // map������ �ߺ��� key�� ���� �� �����Ƿ�, 
	// // key�� �����ϸ� 1�� ��ȯ�ϰ�, �������� ������ 0�� ��ȯ�մϴ�.
	// cout << map.count("Sword") << endl;
	// 
	// 
	// map.insert(std::make_pair("Sword", 9000)); // �ߺ��� key ���̹Ƿ� ���������� ������ �Ͼ��.
	// 
	// cout << "map[Sword]�� Value : " << map["Sword"] << endl;


#pragma endregion
#pragma region Set
	// // Map���� key���� �� ������� �� �� �ִ�.
	// // Set�� �⺻������ ���� ������� �����Ǵ� ���� �ƴ϶�
	// // ������������ ���ĵȴ�.
	// std::set<int> set;
	// 
	// set.insert(10);
	// set.insert(20);
	// set.insert(30);
	// set.insert(40);
#pragma endregion
#pragma endregion
	return 0;
}