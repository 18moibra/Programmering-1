#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	//DEKLARERA VARIABLER
	float kilo1, kilopris1, kilo2, kilopris2, pris1, pris2, totalpris;
	
	cout << "Hur mycket v�ger vara 1?" << endl;
	cin >> kilo1;
	cout << "Vad �r kilopriset f�r vara 1" << endl;
	cin >> kilopris1;
	
	cout << "Hur mycket vger vara 2?" << endl;
	cin >> kilo2;
	cout << "Vad �r kilopriset f�r vara 2?" << endl;
	cin >> kilopris2;
	
	totalpris = pris1 + pris2*1.12;
	
	cout << "Totalpriset �r: " << totalpris;
	
	
	
	
	
	
	
	
	
	return 0;

}
