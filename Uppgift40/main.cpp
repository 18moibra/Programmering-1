#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char** argv) {
	srand(time(NULL));
	int nummer;
	int max; 
	int min;

	cout << "Skriv in det minsta talet " << endl;
	cin >> min;
	cout << "Skriv in det st�rsta talet " << endl;
	cin >> max;

	while(nummer > max or nummer < min) {
	nummer = (rand() % max) + min;
	}
	cout << "Loading.." << endl; 
	cout << "Numret �r: "<< nummer;

	return 0;
}
