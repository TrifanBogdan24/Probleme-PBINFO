// #2160 - Prize
#include <iostream>
#include <fstream>
using namespace std;
fstream f("prize.in");
ofstream g("prize.out");
int n, x, i;
long long s;

int main()
{
    f >> n;
    for (i = 1; i <= n; i++)
    {
        f >> x;
        s += x;
    }
    g << s - (n - 1);
    return 0;
}
