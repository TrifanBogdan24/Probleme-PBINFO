// #1452 - Stergere_Element
#include <iostream>

using namespace std;

int main()
{
    int n = 0, p = 0, X[1505];

    for (int i = 0; i < 1505; i++)
        X[i] = 0;

    cin >> n >> p;
    
    for (int i = 1; i <= n; i++)
        cin >> X[i];
    
    for (int i = p; i <= n; i++)
        X[i] = X[i + 1];
    
    n--;
    
    for (int i = 1; i <= n; i++)
        cout << X[i] << " ";
    
    cout << '\n';
    return 0;
}
