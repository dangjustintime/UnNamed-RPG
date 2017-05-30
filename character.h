//where you left off: character::showStats() is not working properly
//struct for character and member functions
#include <iostream>
#include <iomanip>
#include <string>

struct character {
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
		int baseDex;
		int baseVit;
		int baseMnd;
		int baseAgi;
		
		//job bonuses
		int bonusMaxHP;
		int bonusMaxMP;
		int bonusStr;
		int bonusDex;
		int bonusVit;
		int bonusMnd;
		int bonusAgi;
		
		
		//final stats
		int finalMaxHP;
		int finalMaxMP;
		int finalStr;
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
		void JobChangeFreelancer();
				
	private:



};

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