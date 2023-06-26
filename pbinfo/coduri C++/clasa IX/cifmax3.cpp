// #446 - cifmax3
#include <iostream>

using namespace std;

int nr, cif;

int main()
{
    cin >> nr;
    cif = nr % 10;
    
    while (nr)
    {
        if (nr % 10 > cif) cif = nr % 10;
        nr = nr / 10;
    }

    cout << cif;
    return 0;
}
