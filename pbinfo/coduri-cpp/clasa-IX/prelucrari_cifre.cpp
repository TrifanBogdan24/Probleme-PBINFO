// #3625 - Prelucrari cifre
#include <iostream>
using namespace std;
int a, b, c, d, e = 1, f, cifra;
long long n;

int main()
{
    cin >> n;
    f = n % 10; // cifra unitatilor
    while (n)
    {
        cifra = n % 10;
        a += cifra * cifra;
        if (cifra % 2 == 1)
            b += cifra;
        
        if (cifra % 3 == 0)
            c += cifra;
       
        if (cifra > 5)
            d++;
        
        if (cifra != 0)
            e = e * cifra;
        
        n = n / 10;
        if (n < 10)
            f += n; // cifra cea mai semnificanta
    }
    cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << e << ' ' << f;
    return 0;
}
