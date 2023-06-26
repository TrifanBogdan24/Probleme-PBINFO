// #338 - Expresie5
#include <iostream>

using namespace std;

int main()
{
    int n = 0, S = 0, r, q = 0;
    cin >> n;
    
    S = 0;
    for (int i = 1; i <= n; i++)
    {
        q = 1;
        for (int r = 1; r <= i; r++)
            q = q * i;
        S = S + q;
    }
    
    cout << "Rezultatul este " << S << '\n';
    return 0;
}
