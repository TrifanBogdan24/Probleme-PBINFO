// #820 - FactorialRec
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI
// IMPLEMENTAREA FUNCTIEI TREBUIE SA FIE MUSAI RECURSIVA

int factorial(int n)
{
    if (n != 0)
        return n * factorial(n - 1);
    else
        return 1;
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0;
    
    cout << "n = ";
    cin >> n;

    cout << n << "! = " << factorial(n) << '\n';
    return 0;
}
