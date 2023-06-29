// #1454 - PermutareCuvant
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream f("permutarecuvant.in");
ofstream g("permutarecuvant.out");

char s[25];

int main()
{
    f.getline(s, 25);

    for (unsigned int i = 0; i < strlen(s); i++)
    {
        for (unsigned int j = i; j < strlen(s); j++)
            g << s[j];
        
        for (unsigned int j = 0; j < i; j++)
            g << s[j];
        g << " ";
    }

    g << '\n';
    f.close();
    g.close();
    return 0;
}
