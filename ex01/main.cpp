#include "ClapTrap.hpp"
#include <stdlib.h>
#include "ScavTrap.hpp"


int main(void){

	ClapTrap rita;
	ScavTrap john("John");

	rita.showStats();
	john.showStats();
	john.guardGate();
}