//Monsters.cpp
//Implementation of Monsters.h
//See Monsters.h for documentation
//Last modified: 12/1/16 (more flesh)
// --Matt Lindboe (mklind@ku.edu)

#include "Monsters.h"
//#include PLAYER_DATA_FILE_HERE - just don't forget
#include <iostream>
#include <string>
#include <cstdlib>	//for random numbers
using namespace std;

//Function definitions for the general Monster class:

Monster::Monster()	//constructor for all monsters
{
	//empty so far - what do all monsters have in common?
}


//Function definitions for the Slime class:

Slime::Slime(int playerLevel)	//constructor for slimes
{
	srand(time(NULL));
	m_hpMax = playerLevel + ((rand() % (playerLevel/10));
	m_hpCurr = m_hpMax;
	m_physDef = PHYSDEF_FORMULA_HERE;
	m_magDef = MAGDEF_FORMULA_HERE;
	m_strength = STRENGTH_FORMULA_HERE;
	m_intel = INTEL_FORMULA_HERE;
	m_evasion = EVASION_FORMULA_HERE;
	m_blobbiness = BLOB_FORMULA_HERE;
}

	//get/set methods

{	//general monster methods
	void Monster::setHpMax(int newHP)
	{
		if(newHP<=0)
		{
			m_hpMax = 0;
		}
		else
		{
			m_hpMax = newHP;
		}
	}
	
	int Monster::getHpMax()
	{
		return(m_hpMax);
	}
	
	void Monster::setHpCurr(int newHP)
	{
		if(newHP<=0)
		{
			m_hpCurr = 0;
		}
		else if(newHP>m_hpMax)
		{
			m_hpCurr = m_hpMax;
		}
		else
		{
			m_hpCurr = newHP;
		}
	}
	
	int Monster::getHpCurr()
	{
		return(m_hpCurr);
	}
	
	void Monster::setPhysDef(int newDef)
	{
		if(newDef<0)
		{
			m_physDef = 0;
		}
		else
		{
			m_physDef = newDef;
		}
	}
	
	int Monster::getPhysDef()
	{
		return(m_physDef);
	}
	
	void Monster::setMagDef(int newDef);
	{
		if(newDef<0)
		{
			m_magDef = 0;
		}
		else
		{
			m_magDef = newDef;
		}
	}
	
	int Monster::getMagDef()
	{
		return(m_magDef);
	}
	
	void Monster::setStrength(int newStrength)
	{
		if(newStrength<0)
		{
			m_strength = 0;
		}
		else
		{
			m_strength = newStrength;
		}
	}
	
	int Monster::getStrength()
	{
		return(m_strength);
	}
	
	void Monster::setIntel(int newIntel)
	{
		if(newIntel<0)
		{
			m_intel = 0;
		}
		else
		{
			m_intel = newIntel;
		}
	}
	
	int Monster::getIntel()	//go buy a processor
	{
		return(m_intel);
	}
	
	void Monster::setEvasion(int newEvasion)
	{
		if(newEvasion<0)
		{
			m_evasion = 0;
		}
		else
		{
			m_evasion = newEvasion;
		}
	}
	
	int Monster::getEvasion()
	{
		return(m_evasion);
	}
}

{	//Slime methods
	void Slime::setBlobbiness(int newBlobbiness)
	{
		if(newBlobbiness<0)
		{
			m_blobbiness = 0;
		}
		else
		{
			m_blobbiness = newBlobbiness;
		}
	}
	
	int Slime::getBlobbiness()
	{
		return(m_blobbiness);
	}
}

