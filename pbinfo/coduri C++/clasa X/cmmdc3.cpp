// #1023 - Cmmdc3
#include <iostream>
using namespace std;
int v[1001], n;

int DivideEtImperia(int st, int dr)
{
    int m1, m2, m;
    if (st == dr)
        return v[st];
    else
    {
        m = (st + dr) / 2;
        m1 = DivideEtImperia(st, m);
        m2 = DivideEtImperia(m + 1, dr);

        while (m1 != m2)
        {
            if (m1 > m2)
                m1 = m1 - m2;
            else
                m2 = m2 - m1;
        }
        return m2;
    }
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    
    cout << DivideEtImperia(1, n);
    return 0;
}
