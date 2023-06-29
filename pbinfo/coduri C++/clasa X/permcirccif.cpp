// #909 - PermCircCif
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

void perm(int &n)
{
    int q = 1;
    int m = n;
    
    while (m != 0)
    {
        q = q * 10;
        m = m / 10;
    }
    q = q / 10;

    m = n / q;
    n = n % q;
    n = n * 10 + m;
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0;
    cout << "n = ";
    cin >> n;
    perm(n);
    cout << "Permutarea la stanga = " << n << '\n';
    return 0;
}
