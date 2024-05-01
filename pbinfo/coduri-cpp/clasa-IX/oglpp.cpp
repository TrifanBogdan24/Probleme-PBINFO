// 465 - OglPP
#include <iostream>
#include <cmath>
using namespace std;
long long a,b,i,nr,aux,y;

int pp(int x)
{
    // functia returneaza 1 daca x este patrat perfect
    // si 0 altfel
    return (sqrt(x) == int(sqrt(i)));
}

int invers(int x)
{
    int inv = 0;
    do {
        inv = inv * 10 + x % 10;
        x = x / 10;
    } while (x);
    return inv;
}

int main()
{
    cin >> a >> b;

    for (i = a; i <= b; i++)
        if (pp(i) && pp(invers(i)))
            nr++;

    cout << nr;
    return 0;
}
