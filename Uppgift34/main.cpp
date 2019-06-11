#include <iostream>

using namespace std;

int IncreaseFunction(int nummer) {

	nummer = nummer + 2;

	return nummer;
}

int main(int argc, char** argv) {
	int nummer;
	cout << "Skriv in ett nummer ";
	cin >> nummer;

	cout << IncreaseFunction(nummer);

	return 0;
}
