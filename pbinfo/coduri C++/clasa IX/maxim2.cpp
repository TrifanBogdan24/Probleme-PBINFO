// #7 - maxim2
#include <iostream>
#include <fstream>
using namespace std;

ifstream f("maxim.in");
ofstream g("maxim.out");
long long a, b;

int main()
{
    f >> a >> b;

    if (a > b) g << a;
    else g << b;

    f.close();
    g.close();
    return 0;
}
