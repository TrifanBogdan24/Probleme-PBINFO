// #1772 - Progresie2
#include <iostream>
using namespace std;
int a1,r,n,i,j,q;

int main()
{
    cin >> a1 >> r >> n;

    for (i = 1; i <= n; i++)
    {
        cout << a1 << ' ';
        q = a1;
        for (j = 2; j <= n; j++)
        {
            q += r * n;
            cout << q << ' ';
        }
        a1 = a1+r;
        cout << '\n';
    }
    return 0;
}
