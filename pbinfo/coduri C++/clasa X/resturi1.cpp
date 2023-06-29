// #2795 - Resturi1
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

int cmmdc(int a, int b)
{
    // functia intoarce cel mai mare divizor comun a doua numere

    while (a != b)
    {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    
    return a;
}

int resturi(int n, int x, int y, int r)
{
    int c = x * y / cmmdc(x, y);
    
    int nr = 0;
    for (int i = r; i <= n; i = i + c)
        nr++;
 
    return nr;
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0, r = 0, x = 0, y = 0;
    cout << "n = "; cin >> n;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "r = "; cin >> r;
    cout << resturi(n, x, y, r) << '\n';
    return 0;
}
