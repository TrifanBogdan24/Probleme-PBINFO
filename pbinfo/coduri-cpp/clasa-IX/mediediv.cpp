// #1568 - MedieDiv
#include <iostream>
#include <iomanip>
using namespace std;

int n, i, s, nr;
float q, p, r;

int main()
{
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            s = s + i;
            nr++;
        }
    }
    
    q = float(s);
    p = float(nr);
    r = q / p;
    cout << setprecision(2) << fixed << r;
    return 0;
}
