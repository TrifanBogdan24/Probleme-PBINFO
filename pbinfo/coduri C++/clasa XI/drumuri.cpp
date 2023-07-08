// #581 - Drumuri
#include <iostream>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

int n, m, x, y, k, lg[105], nr, a[105][105];
bool pus[105], PUS[105];

vector<int> rasp;
queue<int> q;

void citire()
{
    cin >> n >> k >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> x >> y;
        a[x][y] = 1;
    }
}

bool dfs1(int x, int y)
{
    
    while (!q.empty())
        q.pop();
    
    for (int i = 1; i <= n; i++)
    {
        pus[i] = 0;
        lg[i] = 1;
    }
    
    q.push(x);
    pus[x] = 1;
    lg[x] = 0;
    
    while (!q.empty())
    {
        int el = q.front();
        
        for (int i = 1; i <= n; i++)
        {
            if (pus[i] == 0 && a[el][i] == 1)
            {
                q.push(i);
                pus[i] = 1;
                lg[i] = lg[el] + 1;
            }
        }
        q.pop();
    }

    if (lg[y] == 0)
        return 0;
    if (lg[y] % 2 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    citire();

    for (int i = 1; i <= n; i++)
        if (i != k && dfs1(k, i) == 1)
            rasp.push_back(i);

    cout << rasp.size() << '\n';

    for (vector<int>::iterator it = rasp.begin(); it != rasp.end(); it++)
        cout << *it << ' ';

    if (!rasp.size())
        cout << '\n';

    return 0;
}
