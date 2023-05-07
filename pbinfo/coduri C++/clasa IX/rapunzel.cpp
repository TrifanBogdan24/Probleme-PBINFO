// #2311 - Rapunzel
#include <iostream>
#include <fstream>
using namespace std;
fstream f("rapunzel.in");
ofstream g("rapunzel.out");
unsigned int m1, m2, s;
unsigned long long n;

int main()
{
    f >> n;
    f >> m1 >> m2;
    s = m1 + m2;
    if (n % s == 0) g << n / s;
    else g << (n - n % s + s) / s;
    f.close();
    g.close();
    return 0;
}
