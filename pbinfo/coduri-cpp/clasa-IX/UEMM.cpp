// #1883 - UEMM
#include <iostream>
#include <fstream>
using namespace std;
int n, i, a[1009], ok, j;

int main()
{
    cin >> n;
    for (i = 1; i <= n; i++) cin >> a[i];

    for (i = 1; i < n; i++)
    {
        j = i + 1;
        while (a[j] <= a[i] && j<= n) j++;
        if (a[j] > a[i]) a[i] = a[j];
        else a[i] = -1;
    }
    a[n] = -1;
    for(i = 1; i<= n; i++) cout <<a[i] <<" ";
    return 0;
}
