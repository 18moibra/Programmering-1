#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int tal;
	int min = 0;
	int raknare = 1;
	
cout << "Type your number";
cin >> tal;

	
	while(raknare < 12) {
		cout << raknare << "x" << tal <<"="<< raknare * tal << endl;
		raknare++;
		
	
	}
	
	
	
	
	
	return 0;
}
