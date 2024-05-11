#pragma once

#include <string>
#include <iostream>

#include "Character.h"

class Mage : public Character
{
public:


	Mage(int manaPoints);
	void MageStats();
	virtual int DoAction() override;
	int FireBall();
	

private:

protected:
	int manaPoints;
	int fireballDamage;
};

