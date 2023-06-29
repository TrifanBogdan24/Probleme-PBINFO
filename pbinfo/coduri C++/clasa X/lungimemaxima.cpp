// #87 - LungimeMaxima
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream f("lgmax.in");
ofstream g("lgmax.out");

int n;
unsigned int max_len = 0;
char cuv[255], rasp[255];

int main()
{
    f >> n;
    f.get();

    for (int i = 1; i <= n; i++)
    {
        f.getline(cuv, 255);
        if (strlen(cuv) > max_len)
        {
            max_len = strlen(cuv);
            strcpy(rasp, cuv);
        }
    }
    
    g << rasp << '\n';
    
    f.close();
    g.close();
    return 0;
}
