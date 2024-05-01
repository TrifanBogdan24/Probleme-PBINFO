// #1932 - PC
#include <iostream>
#include <fstream>
using namespace std;
fstream f("pc.in");
ofstream g("pc.out");
int T, i;
long long x, p, u;

int main()
{
    f >> T;
    for (i = 1; i <= T; i++)
    {
        f >> x;
        if (x < 0) g << '0';
        else 
        {
            u = 3 * x - 1;
            if (u % 2 != 0) g << '0';
            else g << '1';
        }
        if ( i< T) g << ' ';
    }
    f.close();
    g.close();
    return 0;
}
