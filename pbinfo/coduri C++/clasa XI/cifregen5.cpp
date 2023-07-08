// #1810 - CifreGen5
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int st[100], n;

void afis()
{
    for (int i = 1; i <= n; i++)
        cout << st[i];
    cout << '\n';
}

void back(int k)
{
    if (k == n)
    {
        st[n] = 0;
        if (n > 1)
        {
            if (st[n - 1] == 1)
                afis();
        }
        else
            afis();
    }
    else
    {
        if (k == 1)
        {
            st[k] = 0;
            back(k + 1);
        }
        else
        {
            for (int i = 1; i <= 2; i++)
            {
                if (i == 1)
                {
                    st[k] = st[k - 1] - 1;
                    if (0 <= st[k] && st[k] <= n)
                        back(k + 1);
                }
                else if (i == 2)
                {
                    st[k] = st[k - 1] + 1;
                    if (0 <= st[k] && st[k] <= n)
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

    return 0;
}
