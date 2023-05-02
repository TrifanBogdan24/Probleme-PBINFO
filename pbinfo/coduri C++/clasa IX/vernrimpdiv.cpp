// vernrimpdiv 
#include <iostream>

using namespace std;
long long n,d,nr;

int main()
{
    cin >> n;
    for (d = 1; d * d <= n; d++)
    {
        if(n % d == 0)
        {
            nr++;
            if (n % (n / d) == 0 && d != n / d)
            {
                nr++;
            }
        }
    }
    if (nr % 2 == 1) cout << "da";
    else cout << "nu";
    return 0;
}
