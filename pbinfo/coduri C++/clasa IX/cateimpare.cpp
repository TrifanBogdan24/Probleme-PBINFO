// #53 - CateImpare
#include <iostream>

using namespace std;

int n, nr_impare = 0;

int main()
{
    nr_impare = 0;

    do {
        cin >> n;

        if (n % 2 !=0)
            nr_impare++; 

    } while (n);
    
    cout << nr_impare;
    return 0;
}
