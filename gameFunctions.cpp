#include <iostream>
#include "gameObjects.h"
#include <string>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

void objects::characterCreate()
{
    health = 100;
    cout << "Hi, welcome. Please enter your character's information." << endl;
    cout << "Name: ";
    getline(cin, name);
    type = "Human";

    bool ok = false;
    while(!ok)
    {
        int uage;
        cout << "Age= ";
        cin >> uage;

        if(!cin.fail() && (cin.peek() == EOF || cin.peek() == '\n'))
        {  
            if(uage >= 18 && uage < 80)
            {
                age = uage;
                ok = true;
            }

            else
            {
                cout << "You must be over 18 or under 50." << endl;
            }
        }

        else
        {
            cout << "Incorrect entry, please try again." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    int due = 6;

    cout << "You must choose your character's skills. " << "You have " << due << " due." << endl;
    cout << "Please enter your character's skill that you want to upgrade." << endl;

    while (due > 0)
    {
        string choice;
        int choicenumber;
        cout << "Attack= " << attack << " Defence= " << defence << " Due= " << due << endl;
        cout << "Choice: ";
        cin >> choice;

        for_each(choice.begin(), choice.end(), [](char & c)
        {
            c = tolower(c);
        });

        if(choice == "attack")
        {
            do
            {
                cout << "Attack= ";
                cin >> choicenumber;

                if(!cin.fail() && (cin.peek() == EOF ||cin.peek() == '\n'))
                {
                    if(choicenumber <= due)
                    {
                        due -= choicenumber;
                        attack = choicenumber;
                        break;
                    }

                    else
                    {
                        cout << "You have " << due << " due, please enter again." << endl;
                    }

                }

                else
                {
                    cout << "Incorrect entry, please try again." << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }

            } while(choicenumber > due);
        }
        
        else if(choice == "defence")
        {
            do
            {
                cout << "Defence= ";
                cin >> choicenumber;

                if(!cin.fail() && (cin.peek() == EOF || cin.peek() == '\n'))
                {
                    if(choicenumber <= due)
                    {
                        due -= choicenumber;
                        defence = choicenumber;
                        break;
                    }

                    else
                    {
                        cout << "You have " << due << " due, please enter again." << endl;
                    }
                }

                else
                {
                    cout << "Incorrect entry, please try again." << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
            

            } while(choicenumber > due);
        }

        else
        {
            cout << "Incorrect entry, please try again." << endl;
        }
        
    }

    cout << "You should choose your equipment." << endl;

    cout << "Your equipments: " << endl;

    cout << "Name: " << axe.name << endl << "Type: " << axe.type << endl << "Attack= " << axe.attack << endl << "Defence= " << axe.defence << endl;
    cout << "\n";
    cout << "Name: " << sword.name << endl << "Type: " << sword.type << endl << "Attack= " << sword.attack << endl << "Defence= " << sword.defence << endl;
    cout << "\n";
    cout << "Name: " << shield.name << endl << "Type " << shield.type << endl << "Attack= " << shield.attack << endl << "Defence= " << shield.defence << endl;
    cout << "\n";
    cout << "Name: " << spear.name << endl << "Type: " << spear.type << endl << "Attack= " << spear.attack << endl << "Defence= " << spear.defence << endl;
    cout << "\n";
    cout << "Name: " << lightsaber.name << endl << "Type: " << lightsaber.type << endl << "Attack= " << lightsaber.attack << endl << "Defence= " << lightsaber.defence << endl;
    cout << "\n";
    cout << "Name: " << lasergun.name << endl << "Type: " << lasergun.type << endl << "Attack= " << lasergun.attack << endl << "Defence= " << lasergun.defence << endl;
    cout << "\n";
    cout << "Name: " << wand.name << endl << "Type: " << wand.type << endl << "Attack= " << wand.attack << endl << "Defence= " << wand.defence << endl;
    cout << "\n";

    cout << "You choice should be axe, spear, shield, sword, lightsaber, gun or wand." << endl;

    string equipmentchoice;
    
    
    while(equipmentchoice != "axe" && equipmentchoice != "spear" && equipmentchoice != "shield" && equipmentchoice != "sword" && equipmentchoice != "lightsaber" && equipmentchoice != "gun" && equipmentchoice != "wand")
    {
        cout << "Choice: ";
        cin >> equipmentchoice;

        for_each(equipmentchoice.begin(), equipmentchoice.end(), [](char & a)
        {
            a = tolower(a);
        });

        if(equipmentchoice == "axe")
        {
            equipment = axe;
        }

        else if(equipmentchoice == "spear")
        {
            equipment = spear;
        }

        else if(equipmentchoice == "shield")
        {
            equipment = shield;
        }

        else if(equipmentchoice == "sword")
        {
            equipment = sword;
        }

        else if(equipmentchoice == "lightsaber")
        {
            equipment = lightsaber;
        }

        else if(equipmentchoice == "gun")
        {
            equipment = lasergun;
        }

        else if(equipmentchoice == "wand")
        {
            equipment = wand;
        } 


        else
        {
            cout << "Incorrect entry, please try again." << endl;
        }
        
    }

    
}

void objects::healthWrite()
    {

        cout << name << "'s  health=                ";
        for(int a = 0; a < (health / 2); a++)
        {
            cout << "|";
        }

        cout << endl << characterMonster.name << "'s health=      ";

        for(int b = 0; b < (characterMonster.health / 2); b++)
        {
            cout << "|";
        }
    }


void objects::fight()
{

    cout << "Please choose evil character that you want to fight." << endl;

    cout << "Evil characters: " << endl;

    cout << "Name: " << ghost.name << endl << " Type: " << ghost.type << endl << " Age= " << ghost.age << endl << " Attack= " << ghost.attack << endl << " Defence= " << ghost.defence << endl;
    cout << "\n";
    cout << "Name: " << stone.name << endl << " Type: " << stone.type << endl << " Age= " << stone.age << endl << " Attack= " << stone.attack << endl << " Defence= " << stone.defence << endl;
    cout <<  "\n";
    cout << "Name: " << knight.name << endl << " Type: " << knight.type << endl << " Age= " << knight.age << endl <<" Attack= " << knight.attack << endl << " Defence= " << knight.defence << endl;
    cout << "\n";
    cout << "Name: " << dracula.name << endl << " Type: " << dracula.type << endl << " Age= " << dracula.age << endl << " Attack= " << dracula.attack << endl << " Defence= " << dracula.defence << endl;
    cout << "\n";
    cout << "Name: " << voldemort.name << endl << " Type: " << voldemort.type << endl << " Age= " << voldemort.age << endl << " Attack= " << voldemort.attack << endl << " Defence= " << voldemort.defence << endl;
    cout << "\n";
    cout << "Name: " << palpatine.name << endl << " Type: " << palpatine.type << endl << " Age= " << palpatine.age << endl << "Attack= " << palpatine.attack << endl << " Defence= " << palpatine.defence << endl;
    cout << "\n";

    cout << "Your choice should be ghost, stone, knight, dracula, voldemort or palpatine." << endl;

    string monsterchoice;

    while(monsterchoice != "ghost" && monsterchoice != "stone" && monsterchoice != "knight" && monsterchoice != "dracula" && monsterchoice != "voldemort" && monsterchoice != "palpatine")
    {
        cout << "Choice: ";
        cin >> monsterchoice;

        for_each(monsterchoice.begin(), monsterchoice.end(), [] (char & b)
        {
            b = tolower(b);
        });

        if(monsterchoice == "ghost")
        {
            characterMonster = ghost;
        }

        else if(monsterchoice == "stone")
        {
            characterMonster = stone;
        }

        else if(monsterchoice == "knight")
        {
            characterMonster = knight;
        }

        else if(monsterchoice == "dracula")
        {
            characterMonster = dracula;
        }

        else if(monsterchoice == "voldemort")
        {
            characterMonster = voldemort;
        }

         else if(monsterchoice == "palpatine")
        {
            characterMonster = palpatine;
        }

        else
        {
            cout << "Incorrect entry, please try again." << endl;
        }
    }


    cout << "Hi " << name << ", as a hero you are going to fight with " << characterMonster.name << "." << endl;
    cout << "This evil monster has to be destroyed before hurts other people." << endl;
    cout << "You are going to be first to attack." << endl;
    cout << "You should choose your hit number, it has to be between 1 and 50. Don't forget, higher number means lower chance to hit." << endl;

    while(health >= 0 && characterMonster.health >= 0)
    {
        healthWrite();

        int hit = 0;
        int chance;

        do
        {
            cout << endl << "Damage= ";
            cin >> hit;

            if(!cin.fail() && (cin.peek() == EOF || cin.peek() == '\n'))
            {
                if(hit >= 1 && hit <= 50)
                {
                    chance = 100 - hit;
                }

                else
                {
                    cout << "It should be between 1 and 50." << endl;
                }
            }

            else
            {
                cout << "Incorrect entry, please try again." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        } while(hit < 1 || hit > 50 );
        


        srand(time(0));
        int number = rand() % 100 + 1;

        cout << "You are attacking that evil monster and..." << endl;

        if(number < chance)
        {
            if(((hit+attack+equipment.attack) - characterMonster.defence) > 0)
            {
                cout << "You've given " << ((hit+attack+equipment.attack) - characterMonster.defence) << " damage to evil monster." << endl;
                characterMonster.health = characterMonster.health - ((hit+attack+equipment.attack) - characterMonster.defence);

                if(characterMonster.health <= 0)
                {
                    break;
                }
                
            }

            else
            {
                cout << "Monster blocked you, you did not hit." << endl;
            }
        }

        else
        {
            cout << "you missed." << endl;
        }

        int mhit = rand() % 50 + 1;
        int mchance = 100 - mhit;
        int mnumber = rand() % 100 + 1;

        cout << characterMonster.name << " is attacking you and..." << endl;

        if(mnumber < mchance)
        {
            if(((mhit+characterMonster.attack) - (defence + equipment.defence)) > 0)
            {
                cout << "You've taken " << ((mhit+characterMonster.attack) - (defence + equipment.defence)) << " damage." << endl;
                health = health - ((mhit+characterMonster.attack) - (defence + equipment.defence));

                if(health <= 0)
                {
                    break;
                }
            }

            else
            {
                cout << "You blocked that evil monster." << endl;
            }
        }

        else
        {
            cout << "monster missed it." << endl;
        }

    }
}