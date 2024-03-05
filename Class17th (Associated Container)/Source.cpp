#include <iostream>
#include <list>
#include <map>
#include <set> 
using namespace std;

int main()
{
#pragma region 연관 컨테이너
#pragma region List
	// std::list<int> list;
	// 
	// list.push_front(10);
	// list.push_back(5);
	// list.push_back(11);
	// 
	// // list.begin();
	// // list의 첫 번째 주소를 반환하는 함수
	// list.begin();
	// 
	// // list.end();
	// // list의 마지막 그 다음에 있는 주소를 반환하는 함수
	// 
	// list.end();
	// 
	// // list.sort();
	// // list의 모든 원소를 오름차순으로 정렬하는 함수
	// list.sort();
	// 
	// // list.popback();
	// // list에 가장 마지막 원소를 삭제합니다.
	// list.pop_back();
#pragma endregion
#pragma region Map
	// std::map<const char*, int> map;
	// 
	// map.insert(std::make_pair("Sword", 10000));
	// map.insert(std::make_pair("Guard", 8500));
	// map.insert(std::make_pair("Gloves", 7500));
	// 
	// cout << map["Sword"] << endl; // 이렇게 Key값을 확인할 수 있다.
	// cout << map["Guard"] << endl;
	// cout << map["Gloves"] << endl;
	// 
	// // map.find()
	// // map에서 해당하는 key를 가지는 원소를 탐색하는 함수
	// // 해당하는 key가 없을 경우 end()를 반환합니다.
	// map.find("Sword");
	// 
	// // map.count();
	// // map에서 해당 key를 가지는 원소의 개수를 반환하는 함수
	// // map에서는 중복된 key를 가질 수 없으므로, 
	// // key가 존재하면 1을 반환하고, 존재하지 않으면 0을 반환합니다.
	// cout << map.count("Sword") << endl;
	// 
	// 
	// map.insert(std::make_pair("Sword", 9000)); // 중복된 key 값이므로 묻혀버리는 현상이 일어난다.
	// 
	// cout << "map[Sword]의 Value : " << map["Sword"] << endl;


#pragma endregion
#pragma region Set
	// // Map에서 key값을 뺀 구조라고 할 수 있다.
	// // Set은 기본적으로 들어온 순서대로 구성되는 것이 아니라
	// // 오름차순으로 정렬된다.
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