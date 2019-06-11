#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int antal_timmar;
	int lön1;
	int lön2;
	
	cout << "Hur många timmar har du jobbat den här månaden?";
	cin >> antal_timmar;
	
	
	if ( antal_timmar <160) {
		lön1 = antal_timmar*100;
	} else if ( antal_timmar >160 and antal_timmar <240) {
		lön2 = antal_timmar*100+ (antal_timmar-160)*150;
	} else { cout << "Du får inte jobba mer än det här";
	}
	
	resultat = 
	
	
	
	return 0;
}
