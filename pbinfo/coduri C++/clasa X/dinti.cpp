// #842 - Dinti
#include <iostream>

using namespace std;

int n = 0, nr1 = 0, v[15];

void P(int idx, int &nr, int n)
{
    if (idx <= n)
    {
        v[nr + 1] = idx;
        
        for (int i = 1; i <= nr; i++)
            v[nr + i + 1] = v[i];
        
        nr = nr * 2 + 1;
        P(idx + 1, nr, n);
    }
}

int main()
{
    cin >> n;
    v[1] = 1;
    nr1 = 1;
    
    P(2, nr1, n);
    for (int i = 1; i <= nr1; i++)
        cout << v[i] << " ";
    
    cout << '\n';
    return 0;
}
