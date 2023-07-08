// #3158 - numere123
#include <iostream>
#include <fstream>

using namespace std;

long long nr;
int i, v[20], st[20], j, n;
bool pus[30];

void afis()
{
    for (int i = 1; i <= n; i++)
        cout << v[st[i]];
    cout << '\n';
}

void back(int k)
{
    if (k > n)
        afis();
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (!pus[i])
            {
                st[k] = i;
                pus[i] = 1;
                if (k == 1)
                {
                    if (v[st[k]] > 0)
                        back(k + 1);
                }
                else
                    back(k + 1);

                pus[i] = 0;
            }
        }
    }
}

int main()
{
    cin >> nr;
    while (nr)
    {
        v[++n] = nr % 10;
        nr = nr / 10;
    }

    for (int i = 1; i < n; i++)
        for (int j = i + 1; j <= n; j++)
            if (v[i] > v[j])
                swap(v[i], v[j]);
    
    // for(i=1;i<=n;i++)cout<<v[i]<<' ';
    back(1);

    return 0;
}
