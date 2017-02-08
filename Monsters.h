//Monsters.h
//Contains classes describing each randomly encountered monster in the game
//Methods implemented in Monsters.cpp
//Last modified: 11/3/16 (created)
// --Matt Lindboe (mklind@ku.edu)

#ifndef MONSTERS_H
#define MONSTERS_H

class Monster	//general monster class; specific monsters are subclasses
{
	public:
	Monster();	//constructor for a generic monster
	
	//get/set methods - protect from illegal values
	void setHpMax(int newHP);
	int getHpMax();
	void setHpCurr(int newHP);
	int getHpCurr();
	void setPhysDef(int newDef);
	int getPhysDef();
	void setMagDef(int newDef);
	int getMagDef();
	void setStrength(int newStrength);
	int getStrength();
	void setIntel(int newIntel);
	int getIntel();	//go buy a processor
	void setEvasion(int newEvasion);
	int getEvasion();
	
	private:
	//Combat attributes:
	int m_hpMax;	//max hit points
	int m_hpCurr;	//current hit points
	int m_physDef;	//defense against physical damage
	int m_magDef;	//defense against magical damage
	int m_strength;	//physical strength
	int m_intel;	//intelligence (for magic attacks)
	int m_evasion;	//evasion score multiplier
	
};


class Slime: public Monster	//is this how a subclass works?
{
	//Slimes are basic enemies that attack only physically, hold no items, and drop only XP when killed.
	
	public:
	Slime();	//constructor; sets combat attributes based on player level
	void setBlobbiness(int newBlobbiness);
	int getBlobbiness();
	
	
	private:
	int m_blobbiness;	//blobbiness value: not sure what I'll use this for, but I'll use it for something
	
};


#endif