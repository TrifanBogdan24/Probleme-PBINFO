// #1 - sum
#include <iostream>
#include <fstream>
using namespace std;

ifstream f("sum.in");
ofstream g("sum.out");

int a, b, s;

int main()
{
    f >> a >> b;
    s = a + b;
    g << s;
    f.close();
    g.close();
    return  0;
}
