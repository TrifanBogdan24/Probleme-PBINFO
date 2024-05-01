// #3170 - Plata3
#include <iostream>

using namespace std;

int n, v[1000], st[1000], suma = 0, S;
bool OK = 1;

void afis()
{
    if (OK == 1)
    {
        for (int i = 1; i <= n; i++)
            cout << st[i] << ' ';
        OK = 0;
    }
}

void back(int k)
{
    int i;
    if (k > n)
    {
        if (suma == S)
            afis();
    }
    else
    {
        if (OK == 1)
        {
            for (int i = 0; i <= S / v[k]; i++)
            {
                st[k] = i;
                suma += i * v[k];
                
                if (suma <= S)
                    back(k + 1);

                suma -= i * v[k];
            }
        }
    }
}

int main()
{
    cin >> n >> S;

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    back(1);

    return 0;
}