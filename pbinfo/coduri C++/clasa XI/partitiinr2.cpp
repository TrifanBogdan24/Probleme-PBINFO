// #3197 - PartitiiNr2
#include <iostream>

using namespace std;

int n, v[1000], st[1000], suma = 0, S;

void afis(int k)
{
    for (int i = 1; i <= k; i++)
        cout << st[i] << ' ';
    cout << '\n';
}

void back(int k)
{
    int i;
    if (k == 1)
    {
        for (int i = 1; i <= n; i++)
        {
            st[k] = i;
            suma += i;
            if (suma == n)
                afis(k);
            else if (suma < n)
                back(k + 1);
            suma -= i;
        }
    }
    else
    {
        for (int i = st[k - 1] + 1; i <= st[k - 1] + 2; i++)
        {
            st[k] = i;
            suma += i;
            
            if (suma == n)
                afis(k);
            else if (suma < n)
                back(k + 1);
            
            suma -= i;
        }
    }
}

int main()
{
    cin >> n;

    back(1);

    return 0;
}
