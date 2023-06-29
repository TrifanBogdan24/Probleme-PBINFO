// #917 - CmmdcRec1
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI
// IMPLEMENTAREA FUNCTIEI TREBUIE SA FIE RECURSIVA

void cmmdc(int a, int b, int &r)
{
    if (a != b)
    {
        if (a > b)
            cmmdc(a - b, b, r);
        else
            cmmdc(a, b - a, r);

    }
    else
        r = b;
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int x = 0, y = 0, c = 0;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    cmmdc(x, y, c);
    cout << "Cel mai mare divizor comun dintre x si y = " << c << '\n';
    return 0;
}
