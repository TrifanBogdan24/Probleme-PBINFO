// #821 - CmmdcRec
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI
// IMPLEMENTAREA FUNCTIEI TREBUIE SA FIE RECURSIVA

int cmmdc(int a, int b)
{
    if (a != b)
    {
        if (a > b)
            return cmmdc(a - b, b);
        else
            return cmmdc(a, b - a);
    }

    return b;
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int x = 0, y = 0;
    
    cout << "x = ";
    cin >> x;
    
    cout << "y = ";
    cin >> y;

    cout << "cmmdc(" << x << ", " << y << ") = " << cmmdc(x, y) << '\n';
    return 0;
}
