#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
	srand(time(0));
	int yatsy[5], nummer;
	string system;
	
	for(int i = 0; i < 5; i++) {
		yatsy[i] = rand() % 6 + 1;	
	}
	
	for(int i = 0; i < 5; i++) {
		cout << yatsy[i];
		cout << endl;
	}
	
	while(system != "ja" and system != "nej") {
		cout << "Vill du kasta tärningen igen? ja eller nej "<< endl;
		cin >> system;
	}
	
	if(system == "ja") {
		while(nummer < 1 or nummer > 5) {
			cout << "Välj vilken tärning från 1 till 5."<< endl;
			cin >> nummer;
		}
		nummer--;
		yatsy[nummer] = rand() % 6 + 1;
	
		for(int i = 0; i < 5; i++) {
			cout << yatsy[i] << endl;
		}
	}
	
	return 0;
}
