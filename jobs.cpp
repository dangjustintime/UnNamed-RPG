#include "character.h"


//member functions

//creates character with a name, gender, and race
void character::CreateChar(std::string n, std::string g, std::string r) {
	//msg
	std::cout << "Creating character....\n\n\n";
	
	//general info
	name = n;
	gender = g;
	race = r;
	job = "Unemployed";
	
	//base stats
	lvl = 1;
	exp = 0;
	maxExp = 100;
	baseMaxHP = 10;
	baseMaxMP = 10;
	baseStr = 10;
	baseDex = 10;
	baseVit = 10;
	baseMnd = 10;
	baseAgi = 10;
	
	//job bonuses
	bonusMaxHP = 0;
	bonusMaxMP = 0;
	bonusStr = 0;
	bonusDex = 0;
	bonusVit = 0;
	bonusMnd = 0;
	bonusAgi = 0;
		
		
	//final stats
	finalMaxHP = baseMaxHP + bonusMaxHP;
	finalMaxMP = baseMaxMP + bonusMaxMP;
	finalStr = baseStr + bonusStr;
	finalDex = baseDex + bonusDex;
	finalVit = baseVit + bonusVit;
	finalMnd = baseMnd + bonusMnd;
	finalAgi = baseAgi + bonusAgi;
	
	//in-game stats
	currentHP = finalMaxHP;
	currentMP = finalMaxMP;
	status = "Healthy";
		
	//equipment level
	//uses grading system
	swordsLvl = 'F';
	axesLvl = 'F';
	spearsLvl = 'F';
	rodsLvl = 'F';
	stavesLvl = 'F';
	daggersLvl = 'F';
	bowsLvl = 'F';
	katanasLvl = 'F';
	knucklesLvl = 'F';
	shieldsLvl = 'F';
	helmsLvl = 'F';
	armorLvl = 'F';
};

//shows character's stats
void character::ShowStats() const {
	std::cout << "\t" << this->name << "\nJob: " << this->job << std::endl;
	std::cout << "Status: " << this->status << std::endl;
	std::cout << "lvl " << this->lvl << "\t\texp :" << this->exp << "/" << this->maxExp << std::endl;
	std::cout << "HP " << this->currentHP << "/" << this->finalMaxHP << "\tMP " << this->currentMP << "/" << this->finalMaxMP << std::endl;
	std::cout << "\tStats" << std::endl;
	std::cout << "str " << this->finalStr << std::endl;
	std::cout << "dex " << this->finalDex << std::endl;
	std::cout << "vit " << this->finalVit << std::endl;
	std::cout << "mnd " << this->finalMnd << std::endl;
	std::cout << "agi " << this->finalAgi << std::endl;
	std::cout << "\tEquipment" << std::endl;
	std::cout << "Swords\t\tlvl " << this->swordsLvl << std::endl;
	std::cout << "Axes\t\tlvl " << this->axesLvl << std::endl;
	std::cout << "Spears\t\tlvl " << this->spearsLvl << std::endl;
	std::cout << "Rods\t\tlvl " << this->rodsLvl << std::endl;
	std::cout << "Staves\t\tlvl " << this->stavesLvl << std::endl;
	std::cout << "Daggers\t\tlvl " << this->daggersLvl << std::endl;
	std::cout << "Bows\t\tlvl " << this->bowsLvl << std::endl;
	std::cout << "Katanas\t\tlvl " << this->katanasLvl << std::endl;
	std::cout << "Knuckles\tlvl " << this->knucklesLvl << std::endl;
	std::cout << "Shields\t\tlvl " << this->shieldsLvl << std::endl;
	std::cout << "Helms\t\tlvl " << this->helmsLvl << std::endl;
	std::cout << "Armor\t\tlvl " << this->armorLvl << std::endl;
};

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