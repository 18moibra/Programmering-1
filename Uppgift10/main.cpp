#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int antal_timmar;
	int l�n1;
	int l�n2;
	
	cout << "Hur m�nga timmar har du jobbat den h�r m�naden?";
	cin >> antal_timmar;
	
	
	if ( antal_timmar <160) {
		l�n1 = antal_timmar*100;
	} else if ( antal_timmar >160 and antal_timmar <240) {
		l�n2 = antal_timmar*100+ (antal_timmar-160)*150;
	} else { cout << "Du f�r inte jobba mer �n det h�r";
	}
	
	resultat = 
	
	
	
	return 0;
}
