//test.cpp
//tests whatever code
#include "character.h"

int main() {
	character mainChar;
	mainChar.CreateChar("Justin","Male","Human");
	mainChar.ShowStats();
	mainChar.ChangeJobTo("Monk");
	mainChar.ShowStats();
	mainChar.ChangeJobTo("Thief");
	mainChar.ShowStats();
	mainChar.ChangeJobTo("God");
	mainChar.ChangeJobTo("Red Mage");
	mainChar.ShowStats();	
	return 0;
}