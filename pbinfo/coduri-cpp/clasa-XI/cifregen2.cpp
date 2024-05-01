// #1289 - CifreGen2
#include <iostream>
#include <cstring>

using namespace std;

int n, m, st[100];
int v[4] = {2, 3, 5, 7};

void afis()
{
    for (int i = 1; i <= n; i++)
        cout << v[st[i]];
    cout << '\n';
}

void back(int k)
{
    if (k > n)
        afis();
    else
    {
        for (int i = 0; i < 4; i++)
        {
            st[k] = i;
            back(k + 1);
        }
    }
}

int main()
{
    cin >> n;

    back(1);

    return 0;
}
