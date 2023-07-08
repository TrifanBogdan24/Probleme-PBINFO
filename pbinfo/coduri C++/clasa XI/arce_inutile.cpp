// #3420 - arce_inutile
#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int nrconexe, n, m, x, y, rasp;
bool pus[105], a1[105][105], a2[105][105];
vector<int> c_conexe[105];
struct nod {
    int nod1, nod2;
};
nod M[105];
stack<int> s;

void citire()
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> x >> y;
        a1[x][y] = 1;
        a2[y][x] = 1;
    }
}

void dfs_1(int x)
{
    pus[x] = 1;
    
    for (int i = 1; i <= n; i++)
        if (a1[x][i] == 1 && pus[i] == 0)
            dfs_1(i);
    
    s.push(x);
}

void dfs_2(int x)
{
    c_conexe[nrconexe].push_back(x);
    pus[x] = 1;
    
    for (int i = 1; i <= n; i++)
        if (a2[x][i] == 1 && pus[i] == 0)
            dfs_2(i);
}

void rezolva()
{
    vector<int>::iterator it1, it2;

    for (int i = 1; i <= nrconexe; i++)
    {
        for (int j = 1; j <= nrconexe; j++)
        {
            if (i != j)
            {
                for (it1 = c_conexe[i].begin(); it1 != c_conexe[i].end(); it1++)
                {
                    for (it2 = c_conexe[j].begin(); it2 != c_conexe[j].end(); it2++)
                    {
                        if (a1[*it1][*it2] == 1)
                        {
                            a1[*it1][*it2] = 0;
                            rasp++;
                            M[rasp].nod1 = *it1;
                            M[rasp].nod2 = *it2;
                        }
                    }
                }
            }
        }
    }
}

void sortare()
{
    for (int i = 1; i < rasp; i++)
    {
        for (int j = i + 1; j <= rasp; j++)
        {
            if (M[i].nod1 > M[j].nod1)
                swap(M[i], M[j]);
            else if (M[i].nod1 == M[j].nod1 && M[i].nod2 > M[j].nod2)
                swap(M[i], M[j]);
        }
    }
}

void afis_conexe()
{
    for (int i = 1; i <= nrconexe; i++)
    {
        for (int j = 0; j < c_conexe[i].size(); j++)
            cout << c_conexe[i][j] << ' ';
        cout << '\n';
    }
}

int main()
{
    citire();

    for (int i = 1; i <= n; i++)
    {
        if (pus[i] == 0)
            dfs_1(i);
    }

    for (int i = 1; i <= n; i++)
        pus[i] = 0;
    
    while (!s.empty())
    {
        if (pus[s.top()] == 0)
        {
            nrconexe++;
            dfs_2(s.top());
        }
        s.pop();
    }

    // afis_conexe();
    rezolva();
    
    if (rasp != 0)
    {
        cout << rasp << '\n';
        sortare();
        for (int i = 1; i <= rasp; i++)
            cout << M[i].nod1 << ' ' << M[i].nod2 << '\n';
    }
    else
        cout << rasp << '\n';

    return 0;
}