#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int nummer[7];
	int summa = 0;

	
	for(int i = 0; i < 7; i++ ) {
		
		cout << "Skriv in 7 nummer: ";
		cin >> nummer[i];

	}
	
	for(int j = 0; j < 7; j++) {
		summa = summa + nummer[j];
	}
	cout << summa;
	
	return 0;
}
