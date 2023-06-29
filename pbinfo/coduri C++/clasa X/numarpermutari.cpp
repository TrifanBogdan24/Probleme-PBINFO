// #3331 - NumarPermutari
#include <iostream>
#include <algorithm>
#include <fstream>

using namespace std;

int main()
{
    int n = 0, m = 0, x = 0, v[1005];

    for (int i = 0; i < 1005; i++)
        v[i] = 0;

    cin >> n;
    v[1] = v[0] = 1;    // v[0] retine numarul de elemente ale lui n!

    for (int i = 1; i <= n; i++)
    {
        int j = 1;
        int t = 0;
        
        while (j <= v[0] || t)
        {
            t = v[j] * i + t;
            v[j] = t % 10;
            t = t / 10;
            j++;
        }
        
        v[0] = j - 1;
    }
    
    for (int i = 1; i <= v[0] / 2; i++)
        swap(v[i], v[v[0] - i + 1]);

    for (int i = 1; i <= v[0]; i++)
        cout << v[i];
    
    cout << '\n';
    return 0;
}
