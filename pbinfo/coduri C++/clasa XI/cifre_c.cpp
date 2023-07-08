// #3160 - cifre_c
#include <iostream>

using namespace std;

long long n;
int nr, v[11], st[30], a[30], l;
bool OK = 0;

void afis()
{
    for (int i = 1; i <= l; i++)
        cout << st[i];
    cout << '\n';
}

void back(int k)
{
    int i;

    if (k > l)
        afis();
    else
    {
        if (k == 1)
        {
            for (int i = 9; i >= 1; i--)
            {
                if (v[i] != 0)
                {
                    st[k] = i;
                    v[i]--;
                    back(k + 1);
                    v[i]++;
                }
            }
        }
        else
        {
            for (int i = 9; i >= st[k - 1]; i--)
            {
                if (v[i] != 0)
                {
                    st[k] = i;
                    v[i]--;
                    back(k + 1);
                    v[i]++;
                }
            }
        }
    }
}

int main()
{
    cin >> n >> l;
    
    while (n != 0)
    {
        a[++nr] = n % 10;
        v[n % 10]++;
        n = n / 10;
    }
    
    back(1);

    return 0;
}
