#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	string name, time, game, hear, feeling;
	
	cout <<"Vad heter karakt�ren i ber�ttelsen? " << endl;
	cin >> name;
	cout << "Vad �r det f�r tid just nu? " << endl;
	cin >> time;
	cout << "Vad f�r data-spel hen ska spela?" << endl;
	cin >> game;
	cout << "Vad h�r han? " << endl;
	cin >> hear;
	cout << "Vad �r det han ska k�nna sig?" << endl;
	cin >> feeling;
	
	cout << "Jag heter" << name << "och spelar" << game << ", det �r redan klockan" 
	<< time << ". Jag kan h�ra n�gon men vet inte vad det �r, g�r n�rmare till ljudet och h�r" 
	<< hear << ". Nu s� k�nner jag mig" << feeling << ".";
	
	
	
	
	
	
	
	
	return 0;
}
