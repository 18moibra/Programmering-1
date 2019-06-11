#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int  tal1, tal2;

    string op;
	
	int valfri,resultat;
	
	cout << "Skriv in räknesättet i miniräknaren." <<endl;
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
		cout << "Skriv in korrekt räknesätt!";
		
	}
	cout << resultat;

	return 0;
}
