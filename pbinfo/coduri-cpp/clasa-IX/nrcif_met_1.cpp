// #449 - nrcif
#include <iostream>

using namespace std;

int a, nr_cif;

int main()
{
    cin >> a;
    
    do {
        nr_cif++;
        a /= 10;
    } while (a);

    cout << nr_cif;
    return 0;
}
