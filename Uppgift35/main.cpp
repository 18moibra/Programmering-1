#include <iostream>

using namespace std;

int AddFunction(int tal1, int tal2) {

	tal1 = tal1 + tal2;

	return tal1;
}


int main(int argc, char** argv) {
	int tal1, tal2, summa;

	cout << "Skriv in ett nummer ";
	cin >> tal1;
	cout << "Skriv in ett till nummer ";
	cin >> tal2;

	summa = AddFunction(tal1, tal2);
	
	cout << "Loading... " << endl;
	cout << summa;

	return 0;
}
