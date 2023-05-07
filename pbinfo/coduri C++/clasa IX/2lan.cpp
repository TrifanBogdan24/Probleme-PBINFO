// #3479 - 2lan
#include <iostream>
#include <fstream>
using namespace std;
ifstream f("2lan.in");
ofstream g("2lan.out");
int n;

int main()
{
    f >> n;
    if (n == 0 ) g << '1';
    else if (n % 4 == 0) g << '6';
    else if (n % 4 == 1) g << '2';
    else if (n % 4 == 2) g << '4';
    else if (n % 4 == 3) g << '8';
    f.close();
    g.close();
    return 0;
}
