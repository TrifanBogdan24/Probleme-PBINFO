// #1875 - platou1
#include <iostream>
#include <fstream>
using namespace std;
ifstream f("platou1.in");
ofstream g("platou1.out");
int x, i, j, y, nr, I, J, poz, k, X;

int main()
{
    f >> x;
    y = X = x;
    poz = i = k = 1;
    while (f >> x)
    {
        poz++;
        if (x == y)
        {
            j = poz;
            if (j - i + 1 > k)
            {
                k = j - i + 1;
                X = x;
                I = i;
                J = j;
            } else if(j-i+1==k && x < X) X = x;
        } else i = poz;
        y = x;
    }
    g << k << ' ' << X;
    f.close();
    g.close();
    return 0;
}
