// #896 - FactorialIF
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    
    return (n * fact(n - 1));
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
