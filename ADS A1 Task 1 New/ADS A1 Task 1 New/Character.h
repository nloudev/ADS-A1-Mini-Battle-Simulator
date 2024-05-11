#pragma once

#include <string>
#include <iostream>

class Character
{

public:

	Character(std::string name, std::string type, int hitPoints, int strength, int defence);
	void DisplayStats();
	virtual int DoAction();
	void TakeDamage(int dmg);
	bool IsAlive();
	// int Strength(); // Strength() instead of strength
	// string Type(); // same deal
	

private:
	// int strength // if value was here
	// std::string type; // 

protected: // feel like this is more intuitive instead of getters. 
	std::string name; 
	std::string type;
	int strength;
	int hitPoints;
	int defence;

};



