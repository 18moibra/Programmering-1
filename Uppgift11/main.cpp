#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int tal;
	int min = 0;

	cout << "type in a number";
	
	cin >> tal;
	
	while(tal > min) {
		cout << tal << endl;
		tal--;
	}
	
	
	
	
	
	return 0;
}
