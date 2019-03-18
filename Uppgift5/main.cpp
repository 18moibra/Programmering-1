#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int valfri;
	cout << "skriv ett tal för att vinna";
	cout << endl;
	cin >> valfri;
	if(45 < valfri and 63 > valfri) {
	
	//då körs denna kod sant
	cout << "GRATTIS! DU VANN! BRA JOBBAT!";
	} else {
		cout << "GAMEOVER!";
		//annars fel
	}
	
	
	
	
	return 0;
}
