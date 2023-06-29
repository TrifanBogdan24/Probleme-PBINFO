// #916 - FactorialRec1
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI
// IMPLEMENTAREA FUNCTIEI TREBUIE SA FIE RECURSIVA

void factorial(int n, int &f)
{
    if (n != 0)
    {
        factorial(n - 1, f);
        f = f * n;
    }
    else
        f = 1;
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0, fact = 0;
    
    cout << "n = ";
    cin >> n;

    factorial(n, fact);
    cout << n <<"! = " << fact << '\n';

    return 0;
}
