// #547 - Numarare6
#include <iostream>

using namespace std;

int main()
{
    int n = 0, v[1005];
    
    for (int i = 0; i < 1005; i++)
        v[i] = 0;

    cin >> n >> v[1];

    int max_val = v[1];
    int min_val = v[1];
    
    for (int i = 2; i <= n; i++)
    {
        cin >> v[i];
        if (v[i] > max_val)
            max_val = v[i];
        else if (v[i] < min_val)
            min_val = v[i];
    }
    
    int nr = 0;
    int dif = max_val - min_val;
    
    for (int i = 1; i <= n; i++)
        if (v[i] == dif)
            nr = nr + 1;

    cout << nr << '\n';
    return 0;
}
