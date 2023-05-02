// #644 - joc12
#include <iostream>

using namespace std;
int I,M;
long long  a,b,c,d,D,nr1m,nr2m,nr1i,nr2i,q1,q2;

int main()
{
    cin >> I >> a >> b;
    if (a > b)
        swap(a, b);
    cin >> M >> c >> d;
    if (c > d)
        swap(c, d);

    if (a % I)
        nr1i =a + (I - a % I);
    else nr1i = a;

    if (b % I)
        nr2i = b - b % I;
    else nr2i = b;

    q1 = (nr2i - nr1i) / I + 1;
    if (c % M != 0)
        nr1m = c + (M - c % M);
    else nr1m = c;

    if (d % M != 0)
        nr2m = d - d % M;
    else nr2m = d;

    q2=(nr2m - nr1m) / M + 1;
    if (q1 > q2)
        cout << "Ioana " << q1;
    else if (q2 > q1)
        cout << "Maria " << q2;
    else if (q1 == q2)
        cout << "Egalitate " << q1;
    return 0;
}
