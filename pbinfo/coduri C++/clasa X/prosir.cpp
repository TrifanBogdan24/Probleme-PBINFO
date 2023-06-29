// #1866 - prosir
#include <iostream>
#include <fstream>
#include <cstring>
#include <cctype>

using namespace std;

ifstream f("prosir.in");
ofstream g("prosir.out");

char sir[201];

int main()
{
    f.getline(sir, 201);
    
    for (unsigned int i = 0; i < strlen(sir); i++)
    {
        if (sir[i + 1] == ' ' && sir[i] != ' ')
            sir[i] = '5';
        
        if (i == strlen(sir) - 2)
            sir[i] = '5';
        
        g << sir[i];
    }

    g << '\n';
    f.close();
    g.close();
    return 0;
}
