// #2271 - ProdMax1
#include <iostream>
#include <fstream>

using namespace std;

int n;
long long min1, min2, max1, max2, a[100009];

int main()
{
    cin >> n >> a[1];

    if (n > 1)
    {
        cin >> a[2];

        if (a[1] > a[2])
        {
            max1 = a[1];
            max2 = a[2];
            min1 = a[2];
            min2 = a[1];
        }
        else
        {
            max1 = a[2];
            max2 = a[1];
            min1 = a[1];
            min2 = a[2];
        }

        for (int i = 3; i <= n; i++)
        {
            cin >> a[i];

            if (a[i] > max1)
            {
                max2 = max1;
                max1 = a[i];
            }
            else if (a[i] > max2 && a[i] < max1)
                max2 = a[i];

            if (a[i] < min1)
            {
                min2 = min1;
                min1 = a[i];
            }
            else if (a[i] < min2 && a[i] > min1)
                min2 = a[i];
        }

        if (min1 < 0 && min2 < 0)
            cout << max(min1 * min2, max1 * max2);
        else
            cout << max1 * max2;
    }

    return 0;
}
