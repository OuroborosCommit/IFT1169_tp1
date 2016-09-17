#include "tp1.h"
#include <iostream>

int mail() {
	bool r = lire_donnes();
	
	if (r!=true)
		std:cout << "Unnexpected error" ; 
	
	return 0 ; 
	
}