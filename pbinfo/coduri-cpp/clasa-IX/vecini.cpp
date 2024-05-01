// #295 - Vecini
#include <iostream>

using namespace std;

int main()
{
    // declarare si initializare variabile
    int n = 0, OK = 0;
    long long a[112];
    
    for (int i = 0; i < 112; i++)
        a[i] = 0;
    
    // ciitrea datelor
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    // rezolvarea problemei
    for (int i = 2; i < n; i++)
        if (a[i] % 2 == a[i - 1] % 2 && a[i] % 2 == a[i + 1] % 2)
            OK = 1;

    if (OK == 1) cout << "DA";
    else cout<< "NU";

    return 0;
}
