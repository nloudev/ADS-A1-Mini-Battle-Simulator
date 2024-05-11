#include "Mage.h"

Mage::Mage(int manaPoints) : Character("Raven", "Mage", 100, (15 + rand() % 20), (rand() % 5))
{
	this->manaPoints = manaPoints;
	fireballDamage = this->strength;
}

void Mage::MageStats()
{
	std::cout << "\nMana Points: " << manaPoints << std::endl;
	std::cout << "Fireball Damage(same as strength): " << fireballDamage << " * 5" << std::endl;
	std::cout << "NOTE: Mage is a glass cannon. Low Defence, High Damage\n" << std::endl;
}

int Mage::DoAction()
{
	srand(time(NULL));

	if (manaPoints > 10)
	{
		manaPoints -= 10;
		int mageDmg = FireBall() - hitPoints;
		return mageDmg;
	}
	else
	{
		manaPoints += 5;
		return fireballDamage = (10 + rand() % 20);
	}
	
	
}

int Mage::FireBall()
{
	int mageDmg = fireballDamage * 5;
	std::cout << std::endl << name << " uses Fire Ball for " << mageDmg << " Damage!" << std::endl << std::endl;

	return mageDmg;
}
