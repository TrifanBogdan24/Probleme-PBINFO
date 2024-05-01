// #72 - FSumVec
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

int suma(int v[105], int n, int i, int j)
{
    int sum = 0;
    
    for (int k = 1; k < i; k++)
        sum += v[k];
    
    for (int k = j + 1; k <= n; k++)
        sum += v[k];
    
    return sum;
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0, x = 0, y = 0, v[105];
    for (int i = 0; i < 150; i++)
        v[i] = 0;

    cout << "n = ";
    cin >> n;

    cout << "i = ";
    cin >> x;

    cout << "j = ";
    cin >> y;

    cout << "elementele vectorului : ";
    for (int i = 0; i < n; i++)
        cin >> v[i];

    cout << suma(v, n, x, y) << '\n';
    return 0;
}
