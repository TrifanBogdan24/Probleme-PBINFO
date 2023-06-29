// #1154 - CautareDivImp
#include <iostream>

using namespace std;

int n, m, x[1000], y[1000];

int Divide(int st, int dr, int val)
{
    if (st == dr)
    {
        return (x[st] == val);
    }
    else
    {
        int m = (st + dr) / 2;
        int q1 = Divide(st, m, val);
        int q2 = Divide(m + 1, dr, val);
        
        return (q1 + q2 > 0);
    }
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> x[i];
    
    cin >> m;
    for (int i = 1; i <= m; i++)
        cin >> y[i];

    for (int i = 1; i <= m; i++)
        cout << Divide(1, n, y[i]) << " ";

    cout << "\n";
    return 0;
}
