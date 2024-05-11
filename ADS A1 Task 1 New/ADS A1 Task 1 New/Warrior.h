#pragma once

#include <string>
#include <iostream>

#include "Character.h"

class Warrior : public Character
{
public:


	Warrior(int ragePoints);
	void WarriorStats();
	virtual int DoAction() override;
	int HeavySwing();

private:

protected:
	int ragePoints;
	
};
