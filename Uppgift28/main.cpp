#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int  tal1, tal2;

    string op;
	
	int valfri,resultat;
	
	cout << "Skriv in r�knes�ttet i minir�knaren." <<endl;
	cin >> tal1 >> op >> tal2;
	cout << "Svar: " << endl;
	
	if(op == "+") {
		resultat = tal1 + tal2;
	}
	else if(op == "-") {
				resultat = tal1 - tal2;

	}
		else if(op =="*") {
				resultat = tal1 * tal2;

	}	else if(op =="/") {
				resultat = tal1 / tal2;

	}
	else {
		cout << "Skriv in korrekt r�knes�tt!";
		
	}
	cout << resultat;

	return 0;
}
