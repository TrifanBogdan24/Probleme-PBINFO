// #1934 - Catalin si elfii magici
#include <iostream>
#include <fstream>
using namespace std;
fstream f("elfii.in");
ofstream g("elfii.out");
unsigned int x, y, z, nr=0, Max;

int main()
{
    f >> x >> y >> z;
    if (x % 2 && y % 2 && z % 2) g << "Poate data viitoare!";
    else
    {
        if (x % 2 == 0)
        {
            if (y)
            {
                nr++;
                Max = max(Max, y * 100 + z * 10 + x);
            }
            if (z)
            {
                nr++;
                Max = max(Max, z * 100 + y * 10 + x);
            }
        }
        
        if (y % 2 == 0)
        {
            if (x)
            {
                nr++;
                Max = max(Max, x * 100 + z * 10 + y);
            }
            if (z)
            {
                nr++;
                Max = max(Max, z * 100 + x * 10 + y);
            }
        }

        if (z % 2 == 0)
        {
            if (x)
            {    
                nr++;
                Max = max(Max, x * 100 + y * 10 + z);
            }
            if (y)
            {
                nr++;
                Max = max(Max, y * 100 + x * 10 + z);
            }
        }

        if (nr) g << nr << '\n' << Max;
        else g << "Poate data viitoare!";
    }

    return 0;
}
