//struct for items
//i.e. potions, elixirs, phoenix downs
#ifndef ITEMS_H
#define ITEMS_H

#include <iostream>
#include <string>
#incluce "character.h"

struct item {
	public:
	std::name;
	std::string description;
	std::string effect;
	
	//member function prototypes
	void Use(character);
	
	private:



};


#endif