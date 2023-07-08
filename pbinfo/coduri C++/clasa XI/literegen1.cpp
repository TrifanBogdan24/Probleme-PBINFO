// #1812 - LitereGen1
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int st[100], n;

void afis()
{
    for (int i = 1; i <= n; i++)
        cout << char(st[i]);
    cout << '\n';
}

void back(int k)
{
    int i;
    if (k == n)
    {
        st[n] = 97;
        if (n > 1)
        {
            if (st[n - 1] == 98)
                afis();
        }
        else
            afis();
    }
    else
    {
        if (k == 1)
        {
            st[k] = 97;
            back(k + 1);
        }
        else
        {
            for (int i = 1; i <= 2; i++)
            {
                if (i == 1)
                {
                    st[k] = st[k - 1] - 1;
                    if (97 <= st[k] && st[k] <= 122)
                        back(k + 1);
                }
                else if (i == 2)
                {
                    st[k] = st[k - 1] + 1;
                    if (97 <= st[k] && st[k] <= 122)
                        back(k + 1);
                }
            }
        }
    }
}

int main()
{
    cin >> n;
    back(1);

    /// a=97;z=122
    return 0;
}
