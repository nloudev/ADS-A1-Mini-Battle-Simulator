#include "Character.h"

Character::Character(std::string name, std::string type, int hitPoints, int strength, int defence)
{
	this->name = name;
	this->type = type;
	this->hitPoints = hitPoints;
	this->strength = strength;
	this->defence = defence;
}

void Character::DisplayStats()
{
	std::cout << "\n\nName: " << name << std::endl;
	std::cout << "Type: " << type << std::endl;
	std::cout << "Hit Points: " << hitPoints << "hp" << std::endl;
	std::cout << "Strength: " << strength << std::endl;
	std::cout << "Defence: " << defence << std::endl;
}

int Character::DoAction() 
{
	std::cout << "\nYour Normal attack does " << strength << " Damage!\n" << std::endl;
	return strength;
}

void Character::TakeDamage(int dmg)
{

	if (dmg > defence)
	{
		std::cout << name << " gets hit for " << dmg-defence << " Damage!" << std::endl;
		hitPoints -= (dmg - defence);
	}
	else
	{
		std::cout << name << " get hit for 1 Damage!" << std::endl;
		hitPoints -= 1;
	}

	
}

bool Character::IsAlive()
{
	if (hitPoints > 0)
	{
		return true;
	}
	else
	{
		std::cout << name << " is dead...... unlucky" << std::endl;
		exit(1);
	}
}

//int Character::Strength()
//{
//	return strength;
//}

//string Character::Type()
//{
//	return type;
//}




