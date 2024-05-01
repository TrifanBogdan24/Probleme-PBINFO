// #587 - Mall
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, m, x, y;
vector<int> v[105];
queue<int> q;
bool pus[105];

void citire()
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> x >> y;
        v[y].push_back(x); /// se ajunge de la y la x (<-)
    }
}

bool dfs(int x)
{
    pus[x] = 1;
    q.push(x);
    
    while (!q.empty())
    {
        int el = q.front();
        vector<int>::iterator it;
        
        for (it = v[el].begin(); it != v[el].end(); it++)
        {
            if (pus[*it] == 0)
            {
                pus[*it] = 1;
                q.push(*it);
            }
        }
        
        q.pop();
    }
    
    for (int i = 1; i <= n; i++)
        if (pus[i] == 0)
            return 0;
    return 1;
}

bool sol()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            pus[j] = 0;
        
        while (!q.empty())
            q.pop();

        if (dfs(i) == 1)
        {
            cout << i;
            return 1;
        }
    }
    
    return 0;
}

int main()
{
    citire();
    if (sol() == 0)
        cout << "NU EXISTA";


    return 0;
}
