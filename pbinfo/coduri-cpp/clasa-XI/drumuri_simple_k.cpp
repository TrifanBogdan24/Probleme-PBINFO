// #3451 - drumuri_simple_k
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, m, x, d, y, a[105][105], st[105], aux[105][105];
bool pus[105], PUS[105], OK = 1;

vector<int> v[105];
queue<int> q;

void citire()
{
    cin >> n >> m >> d;
    for (int i = 1; i <= m; i++)
    {
        cin >> x >> y;
        a[x][y] = 1;
    }
}

void afis()
{
    for (int i = 1; i <= d; i++)
        cout << st[i] << ' ';
    OK = 0;
}

void back(int k)
{
    if (k == 1)
    {
        for (int i = 1; i <= n; i++)
        {
            st[k] = i;
            back(k + 1);
        }
    }
    else if (k > 1 && k <= d + 1)
    {
        for (int i = 1; i <= n; i++)
        {
            if (a[st[k - 1]][i] == 1 && aux[st[k - 1]][i] == 0)
            {

                st[k] = i;
                aux[st[k - 1]][i] = 1;
                if (k < d)
                    back(k + 1);
                else if (k == d)
                    afis();
                aux[st[k - 1]][i] = 0;
            }
        }
    }
}
int main()
{
    citire();
    d = d + 1;
    back(1);

    if (OK == 1)
        cout << "Nu exista";

    cout << '\n';
    return 0;
}
