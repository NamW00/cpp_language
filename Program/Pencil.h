#pragma once
#include <iostream>
using namespace std;

class Pencil
{
public:
	// 순수 가상 함수
	// 가상 함수로 만들려면 = 0;을 무조건 붙여야한다.

	virtual void Draw() = 0;
};

