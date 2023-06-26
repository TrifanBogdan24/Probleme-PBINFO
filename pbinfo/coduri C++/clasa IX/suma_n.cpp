// #2 - sum_n
#include <iostream>

using namespace std;

int n, v[1005], suma;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
        
    suma = 0;
    for (int i = 1; i <= n; i++)
        suma += v[i];

    cout << suma;
    return 0;
}
