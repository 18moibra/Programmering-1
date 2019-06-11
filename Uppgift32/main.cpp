#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	
	int okej1, okej2, okej3, okej4, okej5, okej6;
	string ord;
	char bokstav1 = 'M', bokstav2 = 'A', bokstav3 = 'T';
	char secondbokstav1 = 'm', secondbokstav2 = 'a', secondbokstav3 = 't';

	cout << "Skriv in ett ord" << endl;
	getline(cin, ord);

	int sluta = 0;
	while (ord[sluta])
	{
      sluta++;
	}

	for(int i = 0; i < sluta; i++)
	{
		if(ord[i] == bokstav1 or ord[i] == secondbokstav1)
		{
			okej1 = true;
		}
		if(ord[i] == bokstav2 or ord[i] == secondbokstav2)
		{
			okej2 = true;
		}
		if(ord[i] == bokstav3 or ord[i] == secondbokstav3)
		{
			okej3 = true;
		}
	}

	if(okej1 == true and okej2 == true and okej3 == true)
	{
		cout << "MAT!";
	}

	return 0;
}
