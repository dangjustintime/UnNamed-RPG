//blah.cpp
//tests whatever code
#include "jobs.h"

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