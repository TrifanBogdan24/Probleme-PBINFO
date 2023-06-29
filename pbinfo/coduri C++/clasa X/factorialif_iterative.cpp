// #896 - FactorialIF
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

int fact(int n)
{
    int q = 1;
    
    for (int i = 1; i <= n; i++)
        q = q * i;
    
    return q;
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0;
    cout << "N = ";
    cin >> n;
    cout << n << "! = " << fact(n) << '\n';
    return 0;
}
