#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    string ord;
    char change = 'a', broken = 'Z';
    cout << "Skriv in ett ord ";
    cin >> ord;

    int inget = 0; 
    while(ord[inget])
    {
      inget++;
    }

    for(int i = 0; i < inget; i++)
    {
        if(ord[i] == 'Z')
        {
            ord[i] = 'a';
        }
    }

    cout << ord;

    return 0;
}
