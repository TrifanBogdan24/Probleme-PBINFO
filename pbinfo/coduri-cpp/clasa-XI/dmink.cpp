// #3422 - dmink
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, m, x, y, k, lg[105], a[105][105];
bool pus[105], OK = 1, PS[105];
vector<int> v[105];
queue<int> q;

void citire()
{
    cin >> n >> m >> k;
    for (int i = 1; i <= m; i++)
    {
        cin >> x >> y;
        a[x][y] = 1;
    }
}

void dfs_de_la_1()
{
    while (!q.empty())
        q.pop();
    
    for (int i = 1; i <= n; i++)
    {
        pus[i] = 0;
        lg[i] = 0;
    }
    pus[1] = 1;
    lg[1] = 0;
    q.push(1);
    PS[1] = 1;
    
    while (!q.empty())
    {
        int el = q.front();
        for (int i = 1; i <= n; i++)
        {
            if (pus[i] == 0 && a[el][i] == 1)
            {
                pus[i] = 1;
                lg[i] = lg[el] + 1;
                if (lg[i] == k)
                {
                    PS[i] = 1;
                    OK = 0;
                }

                q.push(i);
            }
        }
        q.pop();
    }
}

void dfs_spre_1()
{
    while (!q.empty())
        q.pop();
    
    for (int i = 1; i <= n; i++)
    {
        pus[i] = 0;
        lg[i] = 0;
    }
    
    pus[1] = 1;
    lg[1] = 0;
    q.push(1);
    PS[1] = 1;
    
    while (!q.empty())
    {
        int el = q.front();
        for (int i = 1; i <= n; i++)
        {
            if (pus[i] == 0 && a[i][el] == 1)
            {
                pus[i] = 1;
                lg[i] = lg[el] + 1;
                if (lg[i] == k)
                {
                    PS[i] = 1;
                    OK = 0;
                }

                q.push(i);
            }
        }
        q.pop();
    }
}
int main()
{
    citire();
    dfs_de_la_1();
    dfs_spre_1();

    if (OK == 1)
        cout << "Nu exista";
    else
    {
        for (int i = 2; i <= n; i++)
        {
            if (PS[i] == 1)
                cout << i << ' ';
        }
    }

    cout << '\n';
    return 0;
}
