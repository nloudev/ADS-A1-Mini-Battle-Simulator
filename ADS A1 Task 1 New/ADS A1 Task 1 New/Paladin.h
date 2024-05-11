#pragma once

#include <string>
#include <iostream>

#include "Warrior.h"

class Paladin : public Warrior, public Character
{
public:


	Paladin(int healAmount);
	void PaladinStats();
	virtual int DoAction() override;
	int Heal();
	

private:

protected:
	int healAmount;
};

