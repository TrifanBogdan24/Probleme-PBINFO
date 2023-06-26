// #2858 - pv
#include <iostream>

using namespace std;

int main()
{
    int n = 0, a[105];
    int sum = 0;        // suma valorilor pare din sir
    int sum1 = 0;       // suma valorilor aflate pe pozitii pare
    int nr = 0;         // numarul valorilor divizibile cu 10
    int sum2 = 0;       // suma numerelor divizibile cu 3 si aflate pe pozitii impare
    
    for (int i = 0; i < 105; i++)
        a[i] = 0;

    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> a[i];
    
    for (int i = 1; i <= n; i++)
    {
        if (a[i] % 2 == 0)
            sum = sum + a[i];
        
        if (i % 2 == 0)
            sum1 = sum1 + a[i];
        
        if (a[i] % 10 == 0)
            nr = nr + 1;
        
        if (a[i] % 3 == 0 && i % 2 != 0)
            sum2 = sum2 + a[i];
    }

    // afisarea de la dreapta la stanga
    for (int i = n; i >= 1; i--)
        cout << a[i] << " ";
    
    cout << '\n';
    
    cout << sum << '\n'
         << sum1 << '\n'
         << nr << '\n'
         << sum2 << '\n';

    return 0;
}
