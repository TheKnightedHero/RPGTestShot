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
        //int maxMana = 0;
        //int currentMana = 0;
        int passivePerception = 10; // if proficient with perception, should be 10 + perception
        int totalExpEarned = 0;

        //skills list 
        /*
            - currently sorted Alphabetically
            -I might sort them by attribute instead since the number is determined by 
                attribute + proficiency if proficient in said skill.
            -Also might be a little too ambitious for my first RPG since it is only supposed to be a simply CYA text game
        */
        int acrobatics = 0;
        int animalHandling = 0;
        int arcana = 0;
        int athletics = 0;
        int deception = 0;
        int history = 0;
        int insight = 0;
        int intimidation = 0;
        int investigation = 0;
        int medicine = 0;
        int nature = 0;
        int perception = 0;
        int performance = 0;
        int persuasion = 0;
        int religion = 0;
        int sleightOfHand = 0;
        int stealth = 0;
        int survival = 0;
    
    public:

};