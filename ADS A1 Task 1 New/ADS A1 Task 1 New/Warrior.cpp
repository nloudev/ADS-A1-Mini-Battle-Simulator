#include "Warrior.h"

Warrior::Warrior(int ragePoints) : Character("Dave", "Warrior", 150, (10 + rand() % 15), (8 + rand() % 12))
{
	this->ragePoints = ragePoints;
}

void Warrior::WarriorStats()
{
	std::cout << "\nRage Points: " << ragePoints << std::endl;
	std::cout << "NOTE: Warrior has slow movement and high attack (x4 Dmg). As Warrior gets hit he builds rage !\n" << std::endl;
}

int Warrior::DoAction()
{
	srand(time(NULL));

	if (ragePoints > 15)
	{
		ragePoints -= 15;
		int warriorDmg = HeavySwing();
		return warriorDmg;
	}
	else
	{
		ragePoints += 5;
		std::cout << "\nYour Normal attack does " << strength << " Damage!\n" << std::endl;
		return strength = (10 + rand() % 20);
	}

	
}

int Warrior::HeavySwing()
{
	int warriorDmg = strength * 3;
	std::cout << "Warrior uses Heavy Swing for " << warriorDmg << " Damage!" << std::endl;

	return warriorDmg;
}