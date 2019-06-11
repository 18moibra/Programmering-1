#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	bool increase = true;
	int tal = 0;
	
	while(increase == true) {

	cout << "Skriv in ett tal";
	cin >> tal;
	
	if( 8 > tal ) {
		increase = true;
		tal++;
	}
	
	if( tal > 8 ) {
		
		increase = false;
		tal--;
		cout << "ERROR!";
			}
		
	}
	
	
	
	
	
	return 0;
	
}
