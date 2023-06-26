// #495- Constr2
#include <iostream>

using namespace std;

bool is_prime(int x)
{
    for (int d = 2; d * d <= x; d++)
        if (x % d == 0)
            return 0;
    
    return 1;
}

int main()
{
    // declararea si initializarea variabilelor
    int n = 0, m = 0, x[205], y[205];
  
    for (int i = 0; i < 205; i++)
        x[i] = y[i] = 0;

    // citirea vectorului x
    cin >> n;
    
    for (int i = 1; i <= n; i++)
        cin >> x[i];

    // construirea vectorului y
    m = 0;
    for (int i = n; i >= 1; i--)
        if (is_prime(x[i]))
            y[++m] = x[i];

    // afisarea vectorului y
    for (int i = 1; i <= m; i++)
        cout << y[i] << ' ';

    cout <<'\n';
    return 0;
}
