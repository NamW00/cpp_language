#pragma once
#include "Mechanic.h"

class Vulture : public Mechanic
{
public:
	Vulture();
	virtual ~Vulture();

	void Move() override; // override 자체가 재정의라는 의미

};