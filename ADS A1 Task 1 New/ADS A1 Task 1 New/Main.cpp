#include <iostream>
#include <string>
#include <cstdlib>
#include <chrono>
#include <thread>



#include "Character.h"
#include "Warrior.h"
#include "Paladin.h"
#include "Mage.h"

// Header files -> Declare Things
// Cpp -> Implementation files -> add things

int main(void)
{
	srand(time(NULL));



	Character a("Bob", "Normal", 100, (10 + rand() % 20), (10 + rand() % 20)); // name, type, hitPoints, strength, defence

	Warrior b(0); // rage points

    Mage c(0); // mana points

    Paladin d(50); // heal amount



  
  // Menu Credit https://cplusplus.com/forum/beginner/21033/ - Blitz Coder

    int choice;
    bool gameOn = true;
    while (gameOn != false) {

        std::cout << "\033[97m"
            << "---------------------------------------\n\n";
        std::cout << "Very Cool Menu that displays really cool stats. \n\n";
        std::cout << "\033[94m"
                  << " 1 - Bob the Normal Character\n";
        std::cout << " 2 - Dave the Warrior\n";
        std::cout << " 3 - Raven the Mage\n";
        std::cout << " 4 - Tilda the Paladin\n";
        std::cout << " 5 - Battle between Paladin vs Mage. STRENGTH AND DEFENCE RANDOMISED IN BATTLE\n";
        std::cout << " 6 - Exit. \n";
        std::cout << "\033[97m"
            << "\n Enter your choice and press return: ";

        std::cin >> choice;

        std::cout << std::endl;

        switch (choice) {
        case 1:

            a.DisplayStats();
	        a.IsAlive();

            break;
        case 2:

            b.DisplayStats();
            b.WarriorStats();

	        b.IsAlive();

            break;
        case 3:

            c.DisplayStats();
            c.MageStats();

            c.IsAlive();

            break;
        case 4:

            d.Character::DisplayStats();
            d.PaladinStats();

            d.Character::IsAlive();

            break;
        case 5:  // battle depends on luck. Whether Raven can launch two highroll Fireballs or if Tilda can survive to get a heal off
                 // Raven (mage) takes more normal damage, Tilda (paladin) takes less.

            while (d.Character::IsAlive(), c.IsAlive() == true)
            {
                int paladinDmg = d.DoAction();
                c.TakeDamage(paladinDmg);
               // c.DisplayStats(); // check if abilities work
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));

                int mageDmg = c.DoAction();
                d.Character::TakeDamage(mageDmg);
              //  d.Character::DisplayStats();
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
            }

            break;
        case 6:

            std::cout << "\nBye bye!" << std::endl;
            return 0;

            break;
        default:
            std::cout << "\nNot a Valid Choice. \n";
            std::cout << "Choose again.\n";
            std::cin >> choice;
            break;
        }
    } // end of the menu 

	return 0;
}

// std::cout << " " << name << " attacks you with " << basicAtk << " for " << strength << " Hit Points" << std::endl;

// brain mush...