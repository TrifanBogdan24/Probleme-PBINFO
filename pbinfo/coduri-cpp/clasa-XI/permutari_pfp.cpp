// #3150 - permutari_pfp
#include <iostream>

using namespace std;

int n, a[100], st[100];

void afis()
{
    for (int i = 1; i <= n; i++)
        cout << a[st[i]] << ' ';
    cout << '\n';
}

bool OK(int k)
{
    for (int i = 1; i < k; i++)
        if (st[i] == st[k])
            return 0;
    
    return 1;
}

void back(int k)
{
    if (k > n)
        afis();
    else
    {
        for (int i = 1; i <= n; i = i + 2)
        {
            st[k] = i;
            if (OK(k))
                back(k + 2);
        }
    }
}

int main()
{
    cin >> n;

    for (int i = 1; i <= n; i++)
        a[i] = st[i] = i;
    
    back(1);

    return 0;
}
