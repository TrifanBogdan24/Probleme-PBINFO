// #826 - CifMinParRec
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI
// IMPLEMENTAREA FUNCTIEI TREBUIE SA FIE MUSAI RECURSIVA

int cifminpar(long long x)
{
    if (x == 0)
        return -1;

    if (x % 2 != 0)
        return cifminpar(x / 10);
        
    int y = x % 10;
    int z = cifminpar(x / 10);
    
    if (z % 2 != 0)
        return y;
        
    if (z < y)
        return z;
    else
        return y;
}

// SOLUTIA PBINFO SE TERMINA AICI
int main()
{
    long long  n = 0;
    cout << "N = ";
    cin >> n;
    cout << "Cifra para minima a lui " << n << " = " << cifminpar(n) << '\n';
    return 0;
}
