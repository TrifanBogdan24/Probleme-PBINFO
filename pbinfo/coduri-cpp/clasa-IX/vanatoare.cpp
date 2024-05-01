// #1994 - vanatoare
#include <iostream>

using namespace std;

int main()
{
    // declarare si initializare variabile
    long long v[10000], ka = 0, kb = 0, nr = 1, nra = 0, nrb = 0;
    bool OK = 1;
    for (int i = 0; i < 10000; i++)
        v[i] = 0;
    
    // citire date
    cin >> ka >> kb;

    // rezolvarea problemei
    v[1] = 1;
    nr = 1;
    v[0] = 1;
    while (OK)
    {
        nra = (v[nr] + 1) / 2;
        nrb = v[nr] / 2;

        if (nra > ka || nrb > kb) OK = 0;
        else {
            ka = ka - nra;
            kb = kb - nrb;
            nr++;
            v[nr] = v[nr - 1] + v[nr - 2];
            // cout<<v[nr]<<'\n';
        }
    }
    cout << (nr - 1) << '\n' << ka << '\n' << kb;
    return 0;
}
