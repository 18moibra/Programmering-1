#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int points[10];
	
	for(int i = 1; i < 10; i++) {
		
		cout << "Skriv in ett nummer: ";
		cin >> points[i];
	}
	
	for(int j = 10; j > 0; j--) {
		cout << points[j] << endl;
	}

	
	
	
	
	return 0;
}
