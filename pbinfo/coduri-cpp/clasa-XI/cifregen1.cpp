// #1288 - CifreGen1
#include <iostream>
#include <cstring>

using namespace std;

int n, m, frecv[3];
int st[1000];

void afis()
{
    for (int i = 1; i <= n; i++)
        cout << st[i];
    cout << '\n';
}

void back(int k)
{
    int i;
    if (k > n)
        afis();
    else
    {
        if (k == 1)
        {
            for (int i = 1; i < m; i++)
            {
                st[k] = i;
                back(k + 1);
            }
        }
        else
        {
            for (int i = 0; i < m; i++)
            {
                st[k] = i;
                back(k + 1);
            }
        }
    }
}

int main()
{
    cin >> n >> m;

    back(1);

    return 0;
}