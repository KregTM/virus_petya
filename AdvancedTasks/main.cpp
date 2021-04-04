#include <iostream>
#include "AdvancedTasks1.h"

using namespace std;
using namespace Tasks;

int myFunc(int val, int val2) {
	int result = val - val2;
	return result;
	

	
}

int main(int argc, char** argv) {
	//bool result = isHeGonnaSurvive(4,2);
	//cout << result;
	
	int userNames[5] = {2, 3, 4, 4, 5};	
	float average = 0;
	
//	cout << userNames[1];
//	userNames[0] = 4;
	
	for(int i = 0; i < 5; i++) {
		
		average = average + userNames[i];
		
	}
	average = average / 5;
	
	cout << average;
	return 0;
}
