// #458 - Patrat1
#include <iostream>

using namespace std;

int n,i,j,p;
char c, d;

int main()
{
    cin >> n;
    cin >> c >> d;
    p = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (p % 2) cout << c;
            else cout << d;
            
            p = 1 - p;
        }
        cout << '\n';
    }

    return 0;
}
