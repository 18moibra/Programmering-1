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
	
	cout << "Skriv in radie, vikt och färg" << endl;
	cin >> nummer_radie >> nummer_vikt >> nummer_farg;
	
	Boll nummer = { nummer_radie, nummer_vikt, nummer_farg };
	
	Boll copy = Multiplier(nummer);
	
	
	cout << "Radien är: " << copy.radie << endl;
	cout << "Vikten är: " << copy.vikt << endl;
	cout << "Färgen är: " << copy.farg;
	
	return 0;
}
