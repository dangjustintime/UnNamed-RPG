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
<<<<<<< HEAD
	mainChar.ChangeJobTo("God");
=======
	mainChar.ChangeJobTo("Red Mage");
>>>>>>> 712aa30add21fea9e85dc50eac8d094541f95caf
	mainChar.ShowStats();	
	return 0;
}