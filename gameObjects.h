#include <iostream>
#pragma once

using namespace std;

class objects
{
    public:

        string name;
        string type;
        int age;
        int attack = 0;
        int defence = 0;
        int health;

        struct characterEquipments
        {
            string name;
            string type;
            int attack;
            int defence;
        }

        axe = {"Kral Tyler's Axe", "Axe", 5, 0},
        sword = {"Knight Talat's Sword", "Sword", 6, 2},
        shield = {"Queen Yusra's Shield", "Shield", 1, 9},
        spear = {"Knight John's Spear", "Spear", 6, 0},
        lightsaber = {"Darth Vader's Lightsaber", "Lightsaber", 6, 2},
        lasergun = {"Leia's Gun", "Gun", 6, 1},
        wand = {"Dumbledore's Wand", "Wand", 6, 3};


        characterEquipments equipment;

        struct monster
        {
            string name;
            string type;
            int age;
            int attack;
            int defence;
            int health;
        }

        ghost = {"Rebecca's ghost", "Ghost", 189, 2, 9, 100},
        stone = {"Scary Stone Monster", "Monster", 286, 7, 5, 100},
        knight = {"Evil Knight Tim", "Human", 34, 7, 2, 100},
        dracula = {"Drakula Kont", "Vampire", 55, 2, 2, 100},
        palpatine = {"Sith Lord Palpatine", "Human", 40, 2, 2, 100},
        voldemort = {"Voldemort", "Wizard", 40, 2, 2, 100};
        
        monster characterMonster;



        void characterCreate();
        void fight();
        void healthWrite();

};