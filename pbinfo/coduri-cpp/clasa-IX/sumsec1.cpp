// #516 - SumSec1
#include <iostream>
using namespace std;

int index_of_first_even(int n, int v[1005])
{
    // functia intoarce prima valoare impara
    // iterand vectorul de la stanga la dreapta

    for (int i = 1; i <= n; i++)
        if (v[i] % 2 == 1)
            return i;

    return -1;  // vectorul contine doar valori pare
}

int index_of_last_even(int n, int v[1005])
{
    // functia intoarce prima valoare impara
    // iterand vectorul de la dreapta la stanga

    for (int i = n; i >= 1; i--)
        if (v[i] % 2 == 1)
            return i;

    return -1;  // vectorul contine doar valori pare
}


int main()
{
    // declararea si initializarea variabilelor
    int n = 0, sum = 0, v[1005];

    for (int i = 0; i < 1005; i++)
        v[i] = 0;

    // citirea vectorului
    cin >> n;    
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    
    int poz1 = index_of_first_even(n, v);
    int poz2 = index_of_last_even(n, v);
    
    sum = 0;
    for (int i = poz1; i <= poz2; i++)
        sum = sum + v[i];
    
    cout << sum << '\n';
    return 0;
}
