// #372 - Numarare1
#include <iostream>
using namespace std;

int a[1000], n, nr_pairs;

int sum_cif(int x)
{
    // subprogramul returneaza suma cifrelor unui numar primit ca parametru
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
    cin>>n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    nr_pairs = 0;
    for (int i = 1; i < n; i++)
        if((sum_cif(a[i]) + sum_cif(a[i + 1]) ) % 2 == 1)
            nr_pairs++;
    
    cout << nr_pairs;
    return 0;
}
