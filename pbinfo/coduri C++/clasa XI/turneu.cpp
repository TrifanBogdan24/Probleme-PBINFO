// #582 - Turneu
#include <iostream>

using namespace std;

int n, m, x, y, st[105];
bool a[105][105], pus[105];
bool OK = 1;

void back(int k)
{

    if (k == 1)
    {
        for (int i = 1; i <= n; i++)
        {
            st[k] = i;
            pus[i] = 1;
            back(k + 1);
            pus[i] = 0;
        }
    }
    else if (k > 1 && k < n && OK == 1)
    {
        for (int i = 1; i <= n; i++)
        {
            if (pus[i] == 0 && a[st[k - 1]][i] == 1 && OK == 1)
            {
                st[k] = i;
                pus[i] = 1;
                back(k + 1);
                pus[i] = 0;
            }
        }
    }
    else if (k == n && OK == 1)
    {

        for (int i = 1; i <= n; i++)
        {
            if (pus[i] == 0 && a[st[k - 1]][i] == 1 && a[i][st[1]] == 1 && OK == 1)
            {
                OK = 0;
                pus[i] = 1;
                st[k] = i;
                for (int j = 1; j <= n; j++)
                    cout << st[j] << ' ';
                cout << '\n';
            }
        }
    }
}

int main()
{
    cin >> n;
    
    for (int i = 1; i <= n * (n - 1) / 2; i++)
    {
        cin >> x >> y;
        a[x][y] = 1;
    }

    back(1);
    return 0;
}
