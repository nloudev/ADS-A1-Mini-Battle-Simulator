#include "Paladin.h"

Paladin::Paladin(int healAmount) : Warrior(0), Character("Tilda", "Paladin", 130, (10 + rand() % 15), (8 + rand() % 12))
{
	this->healAmount = healAmount;
	
}

void Paladin::PaladinStats()
{
	std::cout << "\nRage Points: " << ragePoints << std::endl;
	std::cout << "Heal Amount: " << healAmount << "hp" << std::endl;
	std::cout << "NOTE: Paladin is a support, When low, they consume Rage Points to heal!\n" << std::endl;
}



int Paladin::DoAction()
{
	srand(time(NULL));
	
		if (Character::hitPoints < 30)
		{
			if (ragePoints > 10)
			{
				Warrior::ragePoints -= 10;
				int paladinHeal = Heal();
				std::cout << "\nHp Remaining: " << Character::hitPoints << std::endl << std::endl;
				return Character::strength;
			}
			
		}
		else
		{
			Warrior::ragePoints += 5;
			return Character::strength = (10 + rand() % 20);
		}

	
}

int Paladin::Heal()
{
	Character::hitPoints += healAmount;
	std::cout << "\nPaladin has been healed for " << healAmount << " hp!" << std::endl;

	return Character::hitPoints;
}





