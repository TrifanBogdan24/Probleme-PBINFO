// #1281 - Regine1
#include <iostream>

using namespace std;

int n, v[15], st[15];
bool pus[15], OK = 1;

void afis()
{
    for (int d = 1; d <= n; d++)
    { 
        // cout<<v[st[d]]<<' ';
        
        for (int i = 1; i < v[st[d]]; i++)
            cout << '-';
        
        cout << '*';
        
        for (int i = v[st[d]] + 1; i <= n; i++)
            cout << '-';
        
        cout << '\n';
    }

    OK = 0;
}

bool ST(int l1, int c1, int l2, int c2)
{
    return (l2 - l1 == c2 - c1);
}

bool DR(int l1, int c1, int l2, int c2)
{
    return (l2 - l1 == c1 - c2);
}

bool regina(int k)
{

    for (int i = 1; i < k; i++)
    {
        if (ST(i, st[i], k, st[k]) == 1 || DR(i, st[i], k, st[k]) == 1)
            return 0;
    }

    return 1;
}

void back(int k)
{
    if (k > n)
    {
        if (OK == 1)
            afis();
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (!pus[i])
            {
                pus[i] = 1;
                st[k] = i;
                if (k == 1)
                    back(k + 1);
                else
                {
                    if (regina(k) == 1)
                        back(k + 1);
                }
                pus[i] = 0;
            }
        }
    }
}
int main()
{
    cin >> n;
    
    for (int i = 1; i <= n; i++)
        v[i] = st[i] = i;
    
    back(1);

    return 0;
}