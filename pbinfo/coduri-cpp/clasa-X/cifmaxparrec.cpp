// #827 - CifMaxParRec
#include <iostream>

using namespace std;

// REZOLVAREA PBINFO INCEPE AICI
// FUNCTIA TREBUIE SA FIE MUSAI RECURSIVA

int cifmaxpar(long long n)
{
    if (n == 0)
        return -1;
    
    if (n % 2 != 0)
        return cifmaxpar(n / 10);

    int x = n % 10;
    int y = cifmaxpar(n / 10);
    
    if (y % 2 == 0)
        return max(x, y);
    else
        return x;
}

// REZOLVAREA PBINFO SE TERMINA AICI

int main()
{
    long long n = 0;
    cout << "N = ";
    cin >> n;
    cout << "Cea mai mare cifra para a lui " << n << " = " << cifmaxpar(n) << '\n';

    return 0;
}
