// #2749 - tata
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, m, t1[100009], t[100009], nod = -1;
bool pus[100009];

vector<int> v[100009];
queue<int> q;

bool dfs(int nod)
{

    q.push(nod);
    pus[nod] = 1;
    t1[nod] = 0;

    while (!q.empty())
    {
        int e = q.front();
        for (vector<int>::iterator it = v[e].begin(); it != v[e].end(); it++)
        {
            if (pus[*it] == 0)
            {
                t1[*it] = e;
                q.push(*it);
                pus[*it] = 1;
            }
        }
        q.pop();
    }
    
    for (int i = 1; i <= n; i++)
        if (t1[i] != t[i])
            return 0;
    return 1;
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> t[i];
        if (t[i] == 0)
            nod = i;
        else
        {
            v[i].push_back(t[i]);
            v[t[i]].push_back(i);
        }
    }

    if (nod == -1)
        cout << "NU";
    else
    {
        if (dfs(nod) == 1)
            cout << "DA";
        else
            cout << "NU";
    }

    return 0;
}

