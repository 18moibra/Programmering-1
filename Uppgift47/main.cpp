#include <iostream>
#include <string>

using namespace std;

struct Boll {

	int vikt;
	int radie; 
	string farg;
	
};

Boll Multiplier(Boll nummer) {
	int radie = nummer.radie, vikt = nummer.vikt;
	
	radie = radie * 8;
	vikt = vikt * 2;
	
	Boll copy = { radie, vikt, nummer.farg };
	
	return copy;
}


int main(int argc, char** argv) {
	
	int nummer_radie, nummer_vikt;
	string nummer_farg;
	
	cout << "Skriv in radie, vikt och f�rg" << endl;
	cin >> nummer_radie >> nummer_vikt >> nummer_farg;
	
	Boll nummer = { nummer_radie, nummer_vikt, nummer_farg };
	
	Boll copy = Multiplier(nummer);
	
	
	cout << "Radien �r: " << copy.radie << endl;
	cout << "Vikten �r: " << copy.vikt << endl;
	cout << "F�rgen �r: " << copy.farg;
	
	return 0;
}
