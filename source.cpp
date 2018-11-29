#include <iostream>
#include "PlayerCharacter.h"
#include "Armor.h"
#include "Weapons.h"
using namespace std;

void main ()
{
    int selectedOption;
    
    cout << "----Main Menu----" << endl;
    cout << "1) Create Character" << endl;
    cout << "2) Purchase Equipment" << endl;
    cout << "3) View Stats" << endl;
    cout << "4) Enter Arena" << endl;
    cout << "5) Exit Game" << endl;

    cin >> selectedOption;
    while(selectedOption != 5)
    {
        if(selectedOption == 1)
        {

        }
        else if(selectedOption == 2)
        {

        }
        else if(selectedOption == 3)
        {

        }
        else if(selectedOption == 4)
        {

        }

        cout << "----Main Menu----" << endl;
        cout << "1) Create Character" << endl;
        cout << "2) Purchase Equipment" << endl;
        cout << "3) View Stats" << endl;
        cout << "4) Enter Arena" << endl;
        cout << "5) Exit Game" << endl;

        cin >> selectedOption;
    }
    cout << "Thank you for playing." << endl;
}