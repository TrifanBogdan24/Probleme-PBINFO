// #70 - FMultiplu

#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

int multipli(int a, int b, int c)
{
    int i, nr = 0, q, j;
    
    if (a % c != 0)
    {
        q = a % c;
        q = c - q;
        i = a + q;
    }
    else
        i = a;

    
    if (b % c == 0)
        j = b;
    else
    {
        q = b % c;
        j = b - q;
    }
    
    nr = (j - i) / c + 1;
    return nr;
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int a = 0, b = 0, c = 0;

    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    cout << "c = ";
    cin >> c;

    cout << multipli(a, b, c) << '\n';
    
    return 0;
}
