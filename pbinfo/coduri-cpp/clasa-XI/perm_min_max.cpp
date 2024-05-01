// #3156 - perm_min_max
#include <iostream>

using namespace std;

int n, st[1000], poz1, poz2;
long long v[1000], Min, Max;
bool pus[1000];

void afis()
{
    for (int i = 1; i <= n; i++)
        cout << v[st[i]] << ' ';
    cout << '\n';
}

void back(int k)
{
    if (k > n)
        afis();
    else
    {
        for (int i = 1; i <= n; i++)
            if (!pus[i])
            {
                st[k] = i;
                pus[i] = 1;

                if (k >= max(poz1, poz2))
                {
                    if (st[poz1] == poz1 && st[poz2] == poz2)
                        back(k + 1);
                }
                else
                    back(k + 1);
                
                pus[i] = 0;
            }
    }
}

int main()
{
    cin >> n;
    cin >> v[1];
    Min = Max = v[1];
    st[1] = poz1 = poz2 = 1;

    for (int i = 2; i <= n; i++)
    {
        cin >> v[i];
        if (v[i] < Min)
        {
            Min = v[i];
            poz1 = i;
        }
        if (v[i] > Max)
        {
            Max = v[i];
            poz2 = i;
        }
        st[i] = i;
    }

    for (int i = 1; i < n; i++)
        if (i != poz1 && i != poz2)
            for (int j = i + 1; j <= n; j++)
                if (j != poz1 && j != poz2)
                    if (v[i] > v[j])
                        swap(v[i], v[j]);

    // for(i=1;i<=n;i++)cout<<v[i]<<' ';
    back(1);

    return 0;
}
