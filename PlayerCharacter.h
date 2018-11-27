/*
    Author: Caleb Herring
    File: Character.h
    Description:
                This file will define the 'character' class so we can create player objects from it.
                This class embodies all of what it means to be a player.
*/

#include <string>
using namespace std;

class PlayerCharacter
{
    private:

        string characterName;
        string Class;

        //The above variables might end up being classes of their own, depending upon how i choose to implement 
        //the creation of the game
        int playerLevel;

        //Player Attributes
        int strength = 8;
        int Dexterity = 8;
        int intelligence = 8;
        int wisdom = 8;
        int Charisma = 8;
        
        int maxHitPoints = 0;
        int currentHitPoints = 0;
        int maxMana = 0;
        int currentMana = 0;
        int passivePerception = 10;

        //skills list
        int animalHandling;
        int athletics;
    
    public:

};