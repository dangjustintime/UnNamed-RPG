#include "character.h"

//a member function that calls other member functions
void character::ChangeJobTo(std::string j) {
	//calls job functions to change job
	//prints out msg
	std::cout << "\n\n\nChanging jobs.....\n" << this->name << " is now ";
	
	//changes to unemployed
	if(j == "Unemployed") {
		std::cout << "unemployed.....\n\n\n" << std::endl;
		this->JobChangeUnemployed();
	}
	//changes to freelancer
	else if(j == "Freelancer") {
		std::cout << "a Freelancer!\n\n\n" << std::endl;
		this->JobChangeFreelancer();
	}
	
	//input validation
	else {
		std::cout << "\n\n\nERROR ERROR ERROR!!!! Job not found.\n" << std::endl;
	}
	
	//readjusts final stats
	finalMaxHP = baseMaxHP + bonusMaxHP;
	finalMaxMP = baseMaxMP + bonusMaxMP;
	finalStr = baseStr + bonusStr;
	finalDex = baseDex + bonusDex;
	finalVit = baseVit + bonusVit;
	finalMnd = baseMnd + bonusMnd;
	finalAgi = baseAgi + bonusAgi;
	currentHP = finalMaxHP;
	currentMP = finalMaxMP;
	
};

//bravely default stats converson
// S = +100%
// A = +80%
// B = +60%
// C = +40%
// D = +20%
// F = +0%

//changes character's job to unemployeed
void character::JobChangeUnemployed() {
	job = "Unemployed";
	
	//stat level bonuses
	//unemployeed get +0% on all stats
	this->bonusMaxHP = this->baseMaxHP * 0;
	this->bonusMaxMP = this->baseMaxMP * 0;
	this->bonusStr = this->baseStr * 0;
	this->bonusDex = this->baseDex * 0;
	this->bonusVit = this->baseVit * 0;
	this->bonusMnd = this->baseMnd * 0;
	this->bonusAgi = this->baseAgi * 0;
	
	//unemployeed get Rank F for all weapons and armor
	//equipment level change
	//uses grading system
	this->swordsLvl = 'F';
	this->axesLvl = 'F';
	this->spearsLvl = 'F';
	this->rodsLvl = 'F';
	this->stavesLvl = 'F';
	this->daggersLvl = 'F';
	this->bowsLvl = 'F';
	this->katanasLvl = 'F';
	this->knucklesLvl = 'F';
	this->shieldsLvl = 'F';
	this->helmsLvl = 'F';
	this->armorLvl = 'F';
	
}

//changes character's job to freelancer
void character::JobChangeFreelancer() {
	job = "Freelancer";
	
	//stat level bonuses
	//freelancer get +40% on all stats
	this->bonusMaxHP = this->baseMaxHP * 0.4;
	this->bonusMaxMP = this->baseMaxMP * 0.4;
	this->bonusStr = this->baseStr * 0.4;
	this->bonusDex = this->baseDex * 0.4;
	this->bonusVit = this->baseVit * 0.4;
	this->bonusMnd = this->baseMnd * 0.4;
	this->bonusAgi = this->baseAgi * 0.4;

	//freelancers get Rank B for all weapons and armor
	//equipment level change
	//uses grading system
	this->swordsLvl = 'B';
	this->axesLvl = 'B';
	this->spearsLvl = 'B';
	this->rodsLvl = 'B';
	this->stavesLvl = 'B';
	this->daggersLvl = 'B';
	this->bowsLvl = 'B';
	this->katanasLvl = 'B';
	this->knucklesLvl = 'B';
	this->shieldsLvl = 'B';
	this->helmsLvl = 'B';
	this->armorLvl = 'B';

};