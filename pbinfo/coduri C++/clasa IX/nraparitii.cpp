// #99 - NrAparitii
#include <iostream>
#include <fstream>
using namespace std;
ifstream f("nraparitii.in");
ofstream g("nraparitii.out");
int n, i, a[1005], v[105];
int main()
{
    f>>n;
    for (i = 1; i <= n; i++)
    {
        f >> a[i];
        v[a[i]]++;
    }
    g << v[a[n]];
    f.close();
    g.close();
    return 0;
}
