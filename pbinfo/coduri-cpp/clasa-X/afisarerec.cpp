// #829 - AfisareRec
#include <iostream>

using namespace std;

// REZOLVAREA PBINFO INCEPE AICI
// IMPELEMENTAREA TREBUIE SA FIE MUSAI RECURSIVA

void afis()
{
    int x = 0;
    cin >> x;
    
    if (x != 0)
        afis();
    
    cout << x << ' ';
}

// REZOLVAREA PBINFO SE TERMINA AICI

int main()
{
    afis();
    cout << "\n";
}
