#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	
	int ratt[5] = {5, 7, 9, 13, 15}; 
	int chance;
	bool perfect = false;
	cout << "Skriv in ett nummer! ";
	cin >> chance;

	for(int i = 0; i < 5; i++ ) {
		
	if(ratt[i] == chance) {
	
	perfect = true;
	

		
	} 
	
}
	
	if(perfect == true) {
			cout << "Grattis";

	}
		
		
	 else { 
	
	cout << "Forlorat";
	}
	
	

	return 0;
}
