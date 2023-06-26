// #8 - maxim3
#include <iostream>
#include <fstream>
using namespace std;

ifstream f("maxim3.in");
ofstream g("maxim3.out");

int a, b, c;
int main()
{
    f >> a >> b >> c;
    
    if (b < a && c < a) g << a;
    else if (a < b && c < b) g << b;
    else if (b < c && a < c) g << c;

    f.close();
    g.close();
    return 0;
}
