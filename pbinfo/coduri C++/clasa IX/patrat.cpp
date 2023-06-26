// #457 - Patrat
#include <iostream>
using namespace std;

int n;
char c, d;

int main()
{
    cin >> n;
    cin >> c >> d;
    
    for (int i = 1; i <= n; i++) cout << c;
    cout << '\n';

    for (int i = 2; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || j == n) cout << c;
            else cout << d;
        }
        cout << '\n';
    }

    for (int i = 1; i <= n; i++) cout << c;
    cout << '\n';

    return 0;
}
