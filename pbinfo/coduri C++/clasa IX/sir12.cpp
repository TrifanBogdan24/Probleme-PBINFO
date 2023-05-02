// #2827 - Sir12
#include <iostream>
#include <fstream>
using namespace std;
fstream f("sir12.in");
ofstream g("sir12.out");
int x, max1 = -3, max2 = -1, n = 0;

int main()
{
    while (f >> x)
    {
        if (x % 2 == 1) n++;
        if (n == 3 && x % 2 == 0)
        {
            if (x > max2)
            {
                max1 = max2;
                max2 = x;
            } else if (x> max1 && x < max2) max1 = x;
        }
    }

    if (max1 < 0 || max2 < 0) g << "Nu exista";
    else g << max1 << ' ' << max2;
    
    return 0;
}
