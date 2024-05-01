// #370 - SumDivK
#include <iostream>
using namespace std;

int sum_cif(int x)
{
    // subprogramul intoarce suma cifrelor
    // unui numar primit ca parametru
    int s = 0;
    while (x)
    {
        s += x % 10;
        x /= 10;
    }
    return s;
}

int main()
{
    // declarare si initializare variabile
    int v[1000], n = 0, k = 0, S = 0;
    for (int i = 0; i < 1000; i++)
        v[i] = 0;

    // citirea datelor
    cin >> k >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    // calculul lui sumei dorite
    for (int i = 1; i <= n; i++)
        if (sum_cif(v[i]) % k == 0)
            S += v[i];
    
    cout << S;
    return 0;

}
