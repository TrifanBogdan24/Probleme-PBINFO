// #2830 - DivImpar

#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

int DivImpar(int a, int b)
{
    int q, Min;
    
    if (a > b)
        Min = b;
    else
        Min = a;
    
    for (int i = 1; i <= Min; i = i + 2)
        if (a % i == 0 && b % i == 0)
            q = i;

    return q;
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int a = 0, b = 0;

    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    cout << DivImpar(a, b) << '\n';

    return 0;
}
