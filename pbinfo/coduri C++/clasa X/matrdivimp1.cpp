// #3165 - MatrDivImp1
#include <iostream>

using namespace std;

int a[101][101], m, n;

int Divide_Et_Impera(int l1, int c1, int l2, int c2)
{
    if (l2 < l1 || c2 < c1)
        return 0;
    
    if (l1 == l2 && c1 == c2)
    {
        if (a[l1][c1] % 2 == 0)
            return a[l1][c1];
        else
            return 0;
    }
    else
    {
        int lm = (l1 + l2) / 2;
        int cm = (c1 + c2) / 2;
        int sum = 0;
        sum += Divide_Et_Impera(l1, c1, lm, cm);
        sum += Divide_Et_Impera(l1, cm + 1, lm, c2);
        sum += Divide_Et_Impera(lm + 1, c1, l2, cm);
        sum += Divide_Et_Impera(lm + 1, cm + 1, l2, c2);
        return sum;
    }
}

int main()
{
    cin >> m >> n;
    for (int i = 1; i <= m; ++i)
        for (int j = 1; j <= n; ++j)
            cin >> a[i][j];
    
    cout << Divide_Et_Impera(1, 1, m, n);
    cout << "\n";
    return 0;
}
