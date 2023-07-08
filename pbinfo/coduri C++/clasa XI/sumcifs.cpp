// #3604 - sumcifs
#include <iostream>

using namespace std;

int n, suma = 0, st[20];
bool v[11], OK = 0;

void afis(int k)
{
    for (int i = 1; i <= k; i++)
        cout << st[i];
    cout << '\n';
    OK = 1;
}

void back(int k, int l)
{
    if (k > l)
    {
        if (suma == n)
            afis(k - 1);
    }
    else
    {
        if (k == 1)
        {
            for (int i = 1; i <= 9; i++)
            {
                st[k] = i;
                v[i] = 0;
                suma += i;
                back(k + 1, l);
                suma -= i;
                v[i] = 1;
            }
        }
        else
        {
            for (int i = 0; i <= 9; i++)
            {
                if (v[i] != 0)
                {
                    st[k] = i;
                    v[i] = 0;
                    suma += i;
                    back(k + 1, l);
                    suma -= i;
                    v[i] = 1;
                }
            }
        }
    }
}

int main()
{
    cin >> n;
    
    for (int i = 0; i <= 9; i++)
        v[i] = 1;
    
    int idx = 1;
    while (idx <= 10)
    {
        back(1, idx);
        idx++;
    }

    if (OK == 0)
        cout << "-1";

    return 0;
}
