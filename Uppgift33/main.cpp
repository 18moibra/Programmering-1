#include <iostream>

using namespace std;

void IncreaseFunction(int nummer) {

	nummer = nummer + 2;

	cout << nummer;
}

int main(int argc, char** argv) {
	int nummer;
	cout << "Skriv in ett nummer ";
	cin >> nummer;

	IncreaseFunction(nummer);

	return 0;
}
