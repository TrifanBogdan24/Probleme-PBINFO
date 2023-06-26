// #2448 - patrate3
#include <iostream>
#include <fstream>
using namespace std;
ifstream f("patrate3.in");
ofstream g("patrate3.out");

int main()
{
    long long n = 0, m = 0, i = 0, t = 0;
    long long k = 0, l = 0, nr = 0;
    int c = 0;
    f >> c;
    if (c == 1)
    {
        f >> m;
        l = 1 + 2 * m;
        g << 4 * (l - 1);
    } else if (c == 2)
    {
        f >> n;
        t = 0;
        nr = 0;
        l = 1;
        
        while (nr < n)
        {
            l = l + 2;
            nr += (l - 1) *4;
            t++;
        }

        g<<t;
    }

    f.close();
    g.close();
    return 0;
}
