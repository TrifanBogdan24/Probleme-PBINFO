// #1544 - Muzical
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

ifstream f("muzical.in");
ofstream g("muzical.out");

char nota[5];
int n, sum = 0;

int main()
{
    f >> n;
    f.get();
    
    for (int i = 1; i <= n; i++)
    {
        f >> nota;
        if (strcmp(nota, "do1") == 0)
            sum = sum + 0;
        else if (strcmp(nota, "re") == 0)
            sum = sum + 1;
        else if (strcmp(nota, "mi") == 0)
            sum = sum + 2;
        else if (strcmp(nota, "fa") == 0)
            sum = sum + 3;
        else if (strcmp(nota, "sol") == 0)
            sum = sum + 4;
        else if (strcmp(nota, "la") == 0)
            sum = sum + 5;
        else if (strcmp(nota, "si") == 0)
            sum = sum + 6;
        else if (strcmp(nota, "do2") == 0)
            sum = sum + 7;
    }
    
    sum = sum % 8;

    if (sum == 0)
        g << "do1";
    else if (sum == 1)
        g << "re";
    else if (sum == 2)
        g << "mi";
    else if (sum == 3)
        g << "fa";
    else if (sum == 4)
        g << "sol";
    else if (sum == 5)
        g << "la";
    else if (sum == 6)
        g << "si";
    else if (sum == 7)
        g << "do2";

    g << '\n';
    f.close();
    g.close();
    return 0;
}
