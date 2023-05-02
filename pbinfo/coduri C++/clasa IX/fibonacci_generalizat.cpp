// #424 - Fibonacci Generalizat 
#include <iostream>
#include <cmath>
using namespace std;
long a,b,c,n;

int main()
{
    cin >> a >> b >> n;
    while (abs(a) <= n)
    {
        cout << a << ' ';
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}
