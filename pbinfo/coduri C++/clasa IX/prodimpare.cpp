// #3976 - ProdImpare 
#include <iostream>

using namespace std;
long long n, p = 1, x;
int main()
{
    cin >> n;
    p = x = 1;
    n--;
    while (n != 0)
    {
        x += 2;
        p *= x;
        n--;
    }
    cout << p;
    return 0;
}
