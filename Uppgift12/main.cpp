#include <iostream>

using namespace std;
int main(int argc, char** argv) {
	
	int ratt_losenord = 1234;
	int fel = 0;
	int forsok;
	
	
	// fr�ga anv�ndaren att sl� in sin pinkod.
	cout << "Skriv in pinkoden.";
	cin >> forsok;
	// �r pinkoden r�tt eller inte
	while (forsok != ratt_losenord and 	fel < 2) {
		
		cout << "forsok igen";

		cin >> forsok;
			fel++;
	}
	

			// -om r�tt -> "Grattis, du f�r nu ta ut pengar!"
if(forsok == ratt_losenord) {
	cout << "Grattis, du f�r nu ta ut pengar!";
	
}else {
	cout << "Ditt kort �r nu sp�rrat!";
}
	
	// -om fel -> "fel pinkod"
	// - om fel -> f�rs�ka igen 2 till f�rsk (3 f�rs�k totalt)
	
	// efter tredje f�s�ket -> om fel = Ditt kort �r nu sp�rrat!
	
	
	
	
	
	
	return 0;
}
