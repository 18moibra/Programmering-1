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
		cout << " 1 = - ";
		cout << endl;
		cout << " 1 = * ";
		cout << endl;
		cout << " 1 = / ";
		
	cin >> op;
	
	
	if(valfri ==1) {
		resultat = tal1 + tal2;
	}
	
	cout << resultat;

	return 0;
}
