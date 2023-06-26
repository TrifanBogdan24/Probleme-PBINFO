// #1405 - DesenRomb2
#include <iostream>
using namespace std;

int n, col, lin, p, m, r;

int main()
{
    cin >> n;
    lin = (n - 1) * 2 + 1;
    col = n * 2 - 1;
    p = 0;
    m = (col + 1) / 2;

    for (int i = 1; i <= lin; i++)
    {
        for (int j = 1; j < m - p; j++) cout << '#';
        for (int j = m- p ; j <= m + p; j++) cout << '*';
        for (int j = m + p + 1; j <= col; j++) cout << '#';
        
        cout << '\n';
        
        if (i <= lin / 2) p++;
        else p--;
    }

    return 0;
}
