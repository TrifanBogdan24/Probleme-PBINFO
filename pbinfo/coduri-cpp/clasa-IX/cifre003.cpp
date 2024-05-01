// #2221 - cifre003
#include <iostream>
using namespace std;

int main()
{
    int n = 0, q = 1, rasp = 0, nr = 0;
    cin >> n;
    
    while (q < n)
    {
        nr = n / (q * 10);
        nr = nr * q + n % q;

        if (nr % 3 == 0)
            rasp++;

        q = q * 10;
    }
    
    cout << rasp;
    return 0;
}
