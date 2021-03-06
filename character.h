//preprocessor directives
//prevents definitions from being defined twice
#ifndef CHARACTER_H
#define CHARACTER_H

//libraries
#include <iostream>
#include <iomanip>
#include <string>

//class for character
class character {
	public:
		//general info
		std::string name;
		std::string gender;
		std::string race;
		std::string job;
		
		//base stats
		int lvl;
		int exp;
		int maxExp;
		int baseMaxHP;
		int baseMaxMP;
		int baseStr;
		int baseInt;
		int baseDex;
		int baseVit;
		int baseMnd;
		int baseAgi;
		
		//job bonuses
		int bonusMaxHP;
		int bonusMaxMP;
		int bonusStr;
		int bonusInt;
		int bonusDex;
		int bonusVit;
		int bonusMnd;
		int bonusAgi;
		
		//final stats
		int finalMaxHP;
		int finalMaxMP;
		int finalStr;
		int finalInt;
		int finalDex;
		int finalVit;
		int finalMnd;
		int finalAgi;
		
		//in-game stats
		int currentHP;
		int currentMP;
		std::string status;
		
		//equipment level
		//uses grading system
		char swordsLvl;
		char axesLvl;
		char spearsLvl;
		char rodsLvl;
		char stavesLvl;
		char daggersLvl;
		char bowsLvl;
		char katanasLvl;
		char knucklesLvl;
		char shieldsLvl;
		char helmsLvl;
		char armorLvl;

		//member function declarations
		void CreateChar(std::string, std::string, std::string);
		void ShowStats() const;
		
		//job member functions
		void ChangeJobTo(std::string);
		void JobChangeUnemployed();
		void JobChangeGod();
		
		//basic jobs
		void JobChangeFreelancer();
		void JobChangeMonk();
		void JobChangeWhiteMage();
		void JobChangeBlackMage();
		void JobChangeKnight();
		//next tier jobs
		void JobChangeRedMage();
		void JobChangeThief();
				
	private:
};

#endif