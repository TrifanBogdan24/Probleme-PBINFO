#include <iostream>
using namespace std;
long long n;
int p, q;

int main ()
{
    cin >> n;
    while (n)
    {
        if (n % 10 == 2) p++;
        else q++;
        n /= 10;
    }
    
    if (p == q) cout << "2 3";
    else if (p > q) cout << '2';
    else cout << '3';

    return 0;
}
