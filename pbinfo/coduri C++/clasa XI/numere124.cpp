// #3159 - numere124
#include <iostream>

using namespace std;

long long nr;
int n, q, a[1000], st[1000], v[1000];

void afis()
{
    for (int i = 1; i <= q; i++)
        cout << st[i];
    cout << '\n';
}

void back(int k)
{
    int i;
    if (k > q)
        afis();
    else
    {
        if (k == 1)
        {
            for (int i = 1; i <= 9; i++)
            {
                if (v[i] != 0)
                {
                    v[i]--;
                    st[k] = i;
                    back(k + 1);
                    v[i]++;
                }
            }
        }
        else
        {
            for (int i = 0; i <= 9; i++)
            {
                if (v[i] != 0)
                {
                    v[i]--;
                    st[k] = i;
                    back(k + 1);
                    v[i]++;
                }
            }
        }
    }
}

int main()
{
    cin >> nr >> q;
    
    while (nr)
    {
        v[nr % 10]++;
        nr = nr / 10;
    }
    
    back(1);

    return 0;
}
