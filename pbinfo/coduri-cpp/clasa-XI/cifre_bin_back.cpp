// #3162 - cifre_bin_back
#include <iostream>
#include <cstring>

using namespace std;

int n, m, frecv[3];
int st[1000];

void afis()
{
    for (int i = 1; i <= n; i++)
        cout << st[i];
    cout << '\n';
}

void back(int k)
{
    if (k > n)
        afis();
    else
    {
        for (int i = 0; i <= 1; i++)
        {
            if (frecv[i] != 0)
            {
                frecv[i]--;
                st[k] = i;
                back(k + 1);
                frecv[i]++;
            }
        }
    }
}

int main()
{
    cin >> n;
    while (n != 0)
    {
        frecv[n % 2]++;
        n = n / 2;
    }
    n = frecv[0] + frecv[1];

    back(1);

    return 0;
}
