#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
	srand(time(0));
	int yatsy[5];
	
	for(int i = 0; i < 5; i++) {
		yatsy[i] = rand() % 6 + 1;	
	}
	
	for(int i = 0; i < 5; i++) {
		cout << yatsy[i];
		cout << endl;
	}
	return 0;
}
