#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	bool run = true;
	char variabel;
	
	while(run == true) {
		cout << "Vill du avsluta?";
		cin >> variabel; // Ja eller Nej
		
		if(variabel == 'j' or variabel == 'J') {
			run = false;
		} else if(variabel == 'n' or variabel == 'N') {
			run = true;
		}
	}
	
	// run = true
	// run == true
	// H�r k�rs programmet
	 
	
	// run = false	
	// run == true
	// H�r k�rs INTE programmet
	
	
	return 0;
}
