// #665 - DivCif
#include <iostream>
using namespace std;

long long a, b, count_nr;

int cif(long long x)
{
    int aux = x;
    while (x)
    {
        int c = x % 10;
        
        if (c && (aux % c))
            return 0;

        x /= 10; 
    }
    return 1;
}

int main()
{
    cin >> a >> b;
    count_nr = 0;

    for (int i = a; i <= b; i++)
        if (cif(i))
            count_nr++;
    
    cout << count_nr;
    return 0;
}