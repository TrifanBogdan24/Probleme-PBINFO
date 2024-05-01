// #368 - NrPal
#include <iostream>

using namespace std;

int oglindit(int x)
{
    // functia va returna numarul format din cifrele inversate ale parametrului
    // inversul unui numar
    int inv = 0;
    while (x)
    {
        inv = inv * 10 + x % 10;
        x = x / 10;
    }
    return inv;
}

int is_pal(int x)
{
    // return 1 => numarul este palindrom
    // return 0 => numarul nu este palindrom
    return (x == oglindit(x));
}

int main()
{
    int a = 0, b = 0, nr_pals = 0;
    
    cin >> a >> b;
    if (a > b)
    {
        // ca intervalul [a, b] sa existe, trebuie ca a < b 
        int aux = 
        a;
        a = b;
        b = aux;
    }

    for (int i = a; i <= b; i++)
        if (is_pal(i))
            nr_pals++;
    
    cout << nr_pals;
    return 0;
}
