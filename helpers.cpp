#include <iostream>
#include  "helpers.h"
#include <time.h>



int randomNumber ()
{
	srand(time(0));
	return rand() % 10;
}

bool massiveExist(int source[], int digit) {
	int lenght = sizeof(source) / sizeof(source[0]);
	
	for(int i = 0; i <= lenght; i++) {
		if (digit == source[i]) {
			return true;
		}
	}
	return false;
}
