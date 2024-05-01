// #243 - sir1
#include <iostream>
using namespace std;
long long n, x, i, nr;
bool ok = 1;

int main()
{
    cin >> x;
    n = 1;
    nr = 1;
    while (ok == 1)
    {
        if (x <= nr)
        {
            ok = 0;
            cout << nr - x + 1;
        }
        n++;
        nr = nr + n;
    }
    
    return 0;
}
