#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int op, tal1, tal2;


	
	int valfri,resultat;
	cout << "Skriv in ett tal i miniräknaren";
	cin >> tal1;
	cin >> tal2;
		cout << "Skriv in ett räknesätt";



		cout << endl;
		cout << " 1 = + ";
		cout << endl;
		cout << " 2 = - ";
		cout << endl;
		cout << " 3 = * ";
		cout << endl;
		cout << " 4 = / ";
		
	cin >> op;
	
	
	if(valfri ==1) {
		resultat = tal1 + tal2;
	}
	else if(valfri ==2) {
				resultat = tal1 - tal2;

	}
		else if(valfri ==3) {
				resultat = tal1 * tal2;

	}	else if(valfri ==4) {
				resultat = tal1 / tal2;

	}
	cout << resultat;

	return 0;
}
