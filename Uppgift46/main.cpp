#include <iostream>

using namespace std;

int nummerratt(int summa) {
	if(summa != 0) {
		summa = summa + nummerratt(summa-1);
	}
	
	return summa;
}

int main(int argc, char** argv) {
	int nummer;
	
	cout << "Skriv in ett nummer "<< endl;
	cin >> nummer;
	
	cout << nummerratt(nummer);
	
	return 0;
}
