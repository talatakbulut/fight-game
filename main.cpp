#include <iostream>
#include "gameObjects.h"
#include "gameFunctions.cpp"
#include <string>

using namespace std;

int main()
{
    objects character;

    character.characterCreate();
    character.fight();

    if(character.health <= 0)
    {
        cout << "Game over, you lost." << endl;
        cout << "You have been destroyed by monster." << endl;
    }

    else if(character.characterMonster.health <= 0)
    {
        cout << "Game over, you won." << endl;
        cout << "Monster has been destroyed." << endl;
    }

    system("Pause.");
}