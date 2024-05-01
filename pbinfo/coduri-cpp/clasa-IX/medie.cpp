// #115 - medie
#include <iostream>
#include <iomanip>

using namespace std;

int n, a[1000];
float M, s = 0.00, nr = 0.00;

int main()
{
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];

        if (a[i] % 2 == 0)
        {
            nr = nr + 1.00;
            s = s + (float)(a[i]);
        }
    }
    
    M = s / nr;
    cout << setprecision(2) << fixed << M;
    return 0;
}
