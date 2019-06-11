#include <iostream>

using namespace std;

float CalculatorFunction(float nummer1, float nummer2, float correct, char tecken, float svar) {

	cout << "Skriv ner på kalkylatorn" << endl;
	cin >> nummer1 >> tecken >> nummer2;

	for(int i = 0; correct != true; i++)
	{
		if(tecken == '+')
		{
			svar = nummer1 + nummer2;
			correct = true;
		} else if(tecken == '-') {
			svar = nummer1 - nummer2;
			correct = true;
		} else if(tecken == '*') {
			svar = nummer1 * nummer2;
			correct = true;
		} else if(tecken == '/') {
			svar = nummer1 / nummer2;
			correct = true;
		} else if(i == 50) {
			cout << "Något har gått snett i räknesättet" << endl;
			correct = true;
		}
	}
cout << "Loading... " << endl;
	return svar;
}



int main(int argc, char** argv) {
	char tecken;
	float nummer1 = 0, nummer2 = 0, correct, svar;

	svar = CalculatorFunction(nummer1, nummer2, correct, tecken, svar);

	cout << "Svar: " << svar;

	return 0;
}
