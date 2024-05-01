// #2413 - retata1
#include <iostream>
#include <fstream>
#include <algorithm>
#include <iomanip>

using namespace std;

ifstream f("reteta1.in");
ofstream g("reteta1.out");

int n, m, v[30][30], frecv[30], L[30][30], x, st[30]; /// n-nr medicamente; m-nr. retete
bool ok = 1;
float Min, pret[31];

struct nod {
    float c;
    int nr;
};
nod a[30];

bool calc()
{
    // for(int i=1;i<=m;i++)cout<<st[i]<<' ';

    for (int i = 1; i <= n; i++)
        frecv[i] = 0;

    for (int i = 1; i <= m; i++)
    {
        if (st[i] == 1)
        {
            for (int j = 1; j <= n; j++)
                frecv[j] += L[i][j];
        }
    }

    // cout<<"   ";
    // for(i=1;i<=n;i++)cout<<frecv[i]<<' ';
    // cout<<'\n';
    for (int i = 1; i <= n; i++)
        if (frecv[i] != 1)
            return 0;
    return 1;
}

void suma()
{
    float sum = 0.0;
    int p;
    int i, j;

    // for(i=1;i<=m;i++)cout<<st[i]<<' ';
    // cout<<"  ";
    for (int i = 1; i <= m; i++)
        if (st[i] == 1)
            for (int j = 1; j <= a[i].nr; j++)
                sum += pret[v[i][j]] / a[i].c;

    // cout<<'\n';
    if (ok == 1)
    {
        ok = 0;
        Min = sum;
    }
    else
    {
        if (sum < Min)
            Min = sum;
    }
}

void back(int k)
{
    if (k > m)
    {
        if (calc() == 1)
            suma();
    }
    else
    {
        for (int i = 0; i <= 1; i++)
        {
            st[k] = i;
            back(k + 1);
        }
    }
}
int main()
{
    f >> n >> m;
    
    for (int i = 1; i <= m; i++)
    {
        f >> a[i].c;  /// 1-compensata(50%din pret);2-necompensata
        f >> a[i].nr; /// nr. medicamente
        
        for (int j = 1; j <= a[i].nr; j++)
        {
            f >> v[i][j];
            L[i][v[i][j]] = 1;
        }
    }

    for (int i = 1; i <= n; i++)
        f >> pret[i]; /// pret medicamente
    /*
    for(i=1;i<=m;i++)
    {for(j=1;j<=n;j++)cout<<L[i][j]<<' ';
        cout<<'\n';
    }*/
    
    back(1);
    g << setprecision(1) << fixed << Min << '\n';
    
    f.close();
    g.close();
    return 0;
}
