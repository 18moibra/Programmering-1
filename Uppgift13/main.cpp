#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int tal;
	int min = 0;
	int tal2;

	cout << "type in a number";
	
	cin >> tal;
	cout << "how many jumps will you take?";
	cin >> tal2;
	
	cout << "how far do you want the number to be?";
	cin >> min;
	
	while(tal > min) {
		cout << tal << endl;
		tal= tal - tal2;
	}
	
	
	
	
	
	return 0;
}
