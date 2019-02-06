#include <iostream>

using namespace std;

int main() {
	
	int miles_today;
	int miles_year_ago;
	int miles;
	

 cout << "Ange mätarinställningen för idag"; 
 cin >> miles_today;
 
 cout << "Ange mätarinställningen för ett år sen";
 cin >> miles_year_ago;
 
 miles = miles_today - miles_year_ago;
 
 cout << "Bilen har gått" << miles <<"Mil";

	return 0;
}
