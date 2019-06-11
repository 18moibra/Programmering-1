#include <iostream>

using namespace std;
int main(int argc, char** argv) {
	
	int ratt_losenord = 1234;
	int fel = 0;
	int forsok;
	
	
	// fråga användaren att slå in sin pinkod.
	cout << "Skriv in pinkoden.";
	cin >> forsok;
	// är pinkoden rätt eller inte
	while (forsok != ratt_losenord and 	fel < 2) {
		
		cout << "forsok igen";

		cin >> forsok;
			fel++;
	}
	

			// -om rätt -> "Grattis, du får nu ta ut pengar!"
if(forsok == ratt_losenord) {
	cout << "Grattis, du får nu ta ut pengar!";
	
}else {
	cout << "Ditt kort är nu spärrat!";
}
	
	// -om fel -> "fel pinkod"
	// - om fel -> försöka igen 2 till försk (3 försök totalt)
	
	// efter tredje fösöket -> om fel = Ditt kort är nu spärrat!
	
	
	
	
	
	
	return 0;
}
