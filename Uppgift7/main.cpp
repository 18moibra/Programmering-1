#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int year, age;
	int bil_model1;
	int bil_model2;
	
	bil_model1 = 100000;
	bil_model2 = 100000/2;
	
	cout << "Skirv in aret";
	cin >> year;
	cout << "vilken model är det?";
	cin >> bil_model1;
	
	age = year - bil_model1;
	
	if(bil_model1 <= 5) {
cout << "välj en helförsäkring";
	}
	else {
cout << "välj en halvförsäkring";
	}
	
	
	
	
	
	return 0;
}
