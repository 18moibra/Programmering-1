#include <iostream>

using namespace std;

int main() {
	
	int miles_today;
	int miles_year_ago;
	int miles;
	

 cout << "Ange m�tarinst�llningen f�r idag"; 
 cin >> miles_today;
 
 cout << "Ange m�tarinst�llningen f�r ett �r sen";
 cin >> miles_year_ago;
 
 miles = miles_today - miles_year_ago;
 
 cout << "Bilen har g�tt" << miles <<"Mil";

	return 0;
}
