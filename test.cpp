//test.cpp
//tests whatever code
#include "character.h"

int main() {
	character mainChar;
	mainChar.CreateChar("Justin","Male","Human");
	mainChar.ShowStats();
	mainChar.ChangeJobTo("Freelancer");
	mainChar.ShowStats();
	mainChar.ChangeJobTo("Unemployed");
	mainChar.ShowStats();
	return 0;
}