// #3077 - suma_prefixe
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    long long n = 0, sum = 0;
    
    cin >> n;

    while (n)
    {
        sum = n + sum;
        n = n / 10;
    }

    cout << sum;
    return 0;
}
