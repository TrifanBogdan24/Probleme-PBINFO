// #1393 - DesenRomb
#include <iostream>

using namespace std;

int n, lin, col, p, m, r;

int main()
{
    cin >> n;
    col = n * 2 - 1;
    lin = (n - 1) * 2 + 1;
    p = 0;
    m = (col + 1) / 2;
    r = 1;

    for (int i = 1; i <= lin; i++)
    {
        for (int j = 1; j < m - p; j++) cout << ' ';
        for (int j = m - p; j <= m + p; j++) cout << r;
        for (int j = m + p + 1; j <= col; j++) cout << ' ';
        
        cout << '\n';
        
        if (i <= lin / 2) {p++; r++;}
        else {p--; r--;}
    }

    return 0;
}