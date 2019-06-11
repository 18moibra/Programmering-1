#include <iostream>

using namespace std;


float FunctionCalculator(float Celcius, float Fahrenheit) {

	Fahrenheit = Celcius * 1.8 + 32;

	return Fahrenheit;
}


void FunctionTemp() {
	float Celcius, Fahrenheit;

	cout << "Vad är det för temraptur på °C  (Celcius) " << endl;
	cin >> Celcius;

 
	cout << "Celcius till Fehrenheit:  " << FunctionCalculator(Celcius, Fahrenheit);
}


int main(int argc, char** argv) {
	FunctionTemp();
	return 0;
}
