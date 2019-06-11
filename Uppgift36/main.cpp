#include <iostream>

using namespace std;

string ABBAFunction(string ord1, string ord2, string ABBA) {

	ABBA = ord1 + ord2 + ord2 + ord1;

	return ABBA;
}


int main(int argc, char** argv) {
	string ord1, ord2, ABBA;

	cout << "Skriv in ett ord" << endl;
	cin >> ord1;
	cout << "Skriv in ett till ord" << endl;
	cin >> ord2;

	cout << ABBAFunction(ord1, ord2, ABBA);
	return 0;
}
