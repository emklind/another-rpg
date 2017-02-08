//Encounters.h
//Contains classes for each combat encounter in the game
//	n.b.: does NOT interact with the user - purely framework
//Last modified: 2/7/16
// --Matt Lindboe (mklind@ku.edu)

#ifndef ENCOUNTERS_H
#define ENCOUNTERS_H

#include "Monsters.h"
using namespace std;

class Encounter
{
	public:
	Encounter(int player_level, int random_difficulty_modifier)
	
	private:
	Monster m_type;	//what monster is being encountered
	
};

#endif