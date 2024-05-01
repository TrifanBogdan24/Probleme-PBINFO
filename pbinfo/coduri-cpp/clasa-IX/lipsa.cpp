// #1255 - lipsa
#include <iostream>
#include <fstream>
using namespace std;
fstream f("lipsa.in");
ofstream g("lipsa.out");
int n,x;
long long s1,s2;

int main()
{
    f >> n;
    for (int i = 1; i <= n; i++)
        s1 += i;

    for (int i = 1; i < n; i++)
    {
        f >> x;
        s2 += x;
    }
    g << (s1 - s2);
    f.close();
    g.close();
    return 0;
}
