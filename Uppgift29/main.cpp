#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	string name, time, game, hear, feeling;
	
	cout <<"Vad heter karaktären i berättelsen? " << endl;
	cin >> name;
	cout << "Vad är det för tid just nu? " << endl;
	cin >> time;
	cout << "Vad för data-spel hen ska spela?" << endl;
	cin >> game;
	cout << "Vad hör han? " << endl;
	cin >> hear;
	cout << "Vad är det han ska känna sig?" << endl;
	cin >> feeling;
	
	cout << "Jag heter" << name << "och spelar" << game << ", det är redan klockan" 
	<< time << ". Jag kan höra någon men vet inte vad det är, går närmare till ljudet och hör" 
	<< hear << ". Nu så känner jag mig" << feeling << ".";
	
	
	
	
	
	
	
	
	return 0;
}
