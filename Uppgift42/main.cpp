#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
	int nummer, slump;
	srand(time(0));

	while(slump > 100 or slump < 1) {
	slump = (rand() % 100) + 1;
	}


	for(int i = 0; i < 5; i++) {

		cout << "Gissa ett nummer mellan 1 till 100! "<< endl;
		cin >> nummer;

		if(nummer == slump) {
			cout << "YOU WIN";
			return 0;
		} else if(nummer < slump) {
			cout << "Nummret är högre än" << nummer << endl;
		} else if(nummer > slump) {
			cout << "Nummret är lägre än " << nummer << endl;
		}
	}

	cout << "GAME OVER";

	return 0;
}
