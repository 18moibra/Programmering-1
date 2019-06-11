#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int slump(int max, int min) {
	int svar;
	srand(time(NULL));

	while(svar > max or svar < min) {
	svar = (rand() % max) + min;
	}
	return svar;
}

int main(int argc, char** argv) {
	int max, min;

	cout << "Skriv in det största talet: " << endl;
	cin >> max;
	
	cout << "Skriv in det minsta talet: "<< endl;
	cin >> min;

	cout << slump(max, min);

	return 0;
}
