#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
	int slump, nummer;
	char spelaigen = 'Z';
	
	srand(time(0));
	
	while(spelaigen == 'Z') {
		
	while(slump > 100 or slump < 1) {
	slump = (rand() % 100) + 1;
	}
	
	
	for(int i = 0; i < 5; i++) {
		
		cout << "Gissa ett nummer mellan 1 till 100! ";
		cin >> nummer;
		
		if(nummer == slump) {
			cout << "YOU WIN";
		} else if(nummer < slump) {
			cout << "Nummret är högre än " << nummer << endl;
		} else if(nummer > slump) {
			cout << "Nummret är lägre än " << nummer << endl;
		}
	}
	
	cout << "För att spela igen tryck: Z" << endl;
	cout << "För att stänga av programmet tryck: X"<< endl;
	cin >> spelaigen;
	}
	
	return 0;
}
