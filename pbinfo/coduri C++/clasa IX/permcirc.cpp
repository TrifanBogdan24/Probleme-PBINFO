// #162 - PermCirc
#include <iostream>

using namespace std;

void display_vect(int n, int v[17])
{
    for (int i = 1; i <= n; i++)
        cout << v[i] << ' ';
    cout << '\n';
}

int main()
{
    int n = 0, v[17];
    
    for (int i = 0; i < 17; i++)
        v[i] = 0;
    
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    display_vect(n, v);

    for (int i = 1; i < n; i++)
    {
        int x = v[1];
        for (int j = 1; j < n; j++)
            v[j] = v[j + 1];
        v[n] = x;
        
        display_vect(n, v);
    }

    return 0;
}
