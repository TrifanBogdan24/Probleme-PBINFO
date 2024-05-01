// #377 - DifiMin
#include <iostream>
#include <cmath>
using namespace std;

long long n, a ,b; 

int main()
{
    cin >> n;
    a = sqrt(n);
    
    while (n % a)
        a--;

    b = n / a;

    if (a > b)
        swap(a, b);

    cout << a << ' ' << b;
    return 0;
}