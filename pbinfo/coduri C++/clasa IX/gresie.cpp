// #1309 - Gresie 
#include <iostream>
#include <fstream>
using namespace std;
int n, m, l;

int main()
{
    cin >> n >> m >> l;
    if (n % l)
    {
        if ( m % l)
            cout << (n / l + 1) * (m / l + 1);
        else
            cout << (n / l + 1) * (m / l);
    } else
    {
        if (m % l)
            cout << (n / l) * (m / l + 1);
        else 
            cout << (n / l) * (m / l);
    }
    return 0;
}
