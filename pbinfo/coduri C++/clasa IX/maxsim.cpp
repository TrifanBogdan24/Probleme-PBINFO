// #165 - maxsim
#include <iostream>
#include <fstream>
using namespace std;
ifstream f("maxsim.in");
ofstream g("maxsim.out");
int n, i;
long long s, v[10001], Max, I, J;

int main()
{
    f >> n;
    for (i = 1; i <= n; i++) f >> v[i];

    for (i = 1; i <= n / 2; i++)
    {
        if (v[i] + v[n - i + 1] > Max)
        {
            Max = v[i] + v[n - i + 1];
            I = i;
            J = n - i + 1;
        }

    }
    g << Max << " " << I << " " << J;
    f.close();
    g.close();
    return 0;
}
