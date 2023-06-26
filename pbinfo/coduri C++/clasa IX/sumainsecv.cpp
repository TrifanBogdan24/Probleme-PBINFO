// #300 - SumaInSecv
#include <iostream>
#include <fstream>
using namespace std;
ifstream f("sumainsecv.in");
ofstream g("sumainsecv.out");

int n, v[105], s[105], i, I, J, sum;
bool ok = 1;

int main()
{
    f >> n >> sum;
    s[0] = 0;
    
    for (i = 1; i <= n; i++)
    {
        f >> v[i];
        s[i] = s[i-1] + v[i];
    }
    
    I = 1;
    while (I < n && ok == 1)
    {
        J = I + 1;
        while (J <= n && ok == 1)
        {
            if (s[J] - s[I - 1] == sum)
            {
                g << I << ' ' << J;
                ok = 0;
            }
            J++;
        }
        I++;
    }
    
    if (ok == 1) g << "0 0";
    return 0;
}
