// #494 - Constr1
#include <iostream>

using namespace std;

int main()
{
    int n = 0, sum = 0, x[205], y[205];
    
    for (int i = 0; i < 205; i++)
        x[i] = y[i] = 0;


    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> x[i];

    sum = 0;
    for (int i = 1; i <= n ; i++)
        sum += x[i];


    for (int i = 1; i <= n; i++)
        y[i] = sum - x[i];
    
    for (int i = 1; i <= n; i++)
        cout << y[i] << " ";

    cout << '\n';
    return 0;
}
