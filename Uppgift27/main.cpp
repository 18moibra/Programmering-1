#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int  tal1, tal2;

    string op;
	
	int valfri,resultat;
	cout << "Skriv in ett tal i miniräknaren";
	cin >> tal1;
	cout << "ett till " << endl;
	cin >> tal2;
		cout << "Skriv in ett räknesätt";



		cout << endl;
		cout << " Addition = + ";
		cout << endl;
		cout << " Subtraktion = - ";
		cout << endl;
		cout << " Multiplikation = * ";
		cout << endl;
		cout << " Division = / ";
		
	cin >> op;
	
	
	if(op == "Addition") {
		resultat = tal1 + tal2;
	}
	else if(op == "Subtraktion") {
				resultat = tal1 - tal2;

	}
		else if(op =="Multiplikation") {
				resultat = tal1 * tal2;

	}	else if(op =="Division") {
				resultat = tal1 / tal2;

	}
	else {
		cout << "Du måste skriva Addition, Subraktion, Multiplikation, Division!";
		
	}
	cout << resultat;

	return 0;
}
