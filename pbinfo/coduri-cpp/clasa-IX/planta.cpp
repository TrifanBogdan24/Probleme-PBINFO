// #2908 - planta
#include <iostream>
#include <fstream>
using namespace std;

ifstream f("planta.in");
ofstream g("planta.out");


int main()
{
    int d = 0, a = 0, b = 0, n = 0;
    f >> d >> a >> b >> n;
    
    if (n % 2 == 0) g << d + n / 2 * (a - b);
    else g << d + n / 2 * (a - b) + a;
    
    f.close();
    g.close();
    return 0;
}
