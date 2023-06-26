// #119 - 2maxim
#include <iostream>

using namespace std;

int n;
long long v[1005];

int main()
{
    // citirea datelor
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    // sortarea descrescatoare a vectorului
    for (int i = 1; i < n; i++)
        for (int j = i + 1; j <= n; j++)
            if (v[i] > v[j])
                swap(v[i], v[j]);
    
    // v[1] > v[2] > ....
    cout << v[1] << " " << v[2];
    return 0;

}