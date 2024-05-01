// #3161 - permutari5
#include <iostream>

using namespace std;

int n, st[1000], poz;
long long v[1000], M;
bool pus[1000];

void afis()
{
    for (int i = 1; i <= n; i++)
        cout << v[st[i]] << ' ';
    cout << '\n';
}

bool OK(int k)
{
    if (k >= poz && st[poz] != poz)
            return 0;

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
        for (int i = 1; i <= n; i++)
        {
            st[k] = i;
            if (OK(k))
                back(k + 1);
        }
    }
}

int main()
{
    cin >> n;
    cin >> v[1];
    M = v[1];
    st[1] = poz = 1;
    
    for (int i = 2; i <= n; i++)
    {
        cin >> v[i];
        if (v[i] < M)
        {
            M = v[i];
            poz = i;
        }
        st[i] = i;
    }

    for (int i = 1; i < n; i++)
        if (i != poz)
            for (int j = i + 1; j <= n; j++)
                if (j != poz)
                    if (v[i] > v[j])
                        swap(v[i], v[j]);

    // for(i=1;i<=n;i++)cout<<v[i]<<' ';
    
    back(1);

    return 0;
}
