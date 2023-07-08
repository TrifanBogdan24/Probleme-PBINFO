// #1866 - prosir
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream f("prosir.in");
ofstream g("prosir.out");

int ok = 1;
char v[255];

int main()
{
    f.getline(v, 255);

    for (int i = 0; i < strlen(v); i++)
    {
        if (v[i + 1] == ' ' && v[i] != ' ')
            v[i] = '5';
        
        if (i == strlen(v) - 2)
            v[i] = '5';
        
        g << v[i];
    }

    f.close();
    g.close();
    return 0;
}
