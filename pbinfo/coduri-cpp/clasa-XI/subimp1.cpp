// #3247 - subimp1
#include <iostream>

using namespace std;

int n, st[10000];
bool pus[1000];

void afis(int k)
{
    for (int i = 1; i <= k; i++)
        cout << st[i] << ' ';
    cout << '\n';
}

void back(int k)
{
    if (k <= n)
    {
        for (int i = st[k - 1] + 1; i <= n; i++)
        {
            if (!pus[i])
            {
                pus[i] = 1;
                st[k] = i;
                if (k % 2 == 1)
                    afis(k);
                back(k + 1);
                pus[i] = 0;
            }
        }
    }
}

int main()
{
    cin >> n;
    back(1);
    return 0;
}
