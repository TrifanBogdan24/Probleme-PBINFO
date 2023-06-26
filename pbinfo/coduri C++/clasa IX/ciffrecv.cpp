// #187 - CifFrecv
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("ciffrecv.in");
ofstream g("ciffrecv.out");

int main()
{
    int cif = 0, frecv[11];

    for (int i = 0; i < 11; i++)
        frecv[i] = 0;

    while (f >> cif)
        frecv[cif]++;
    
    if (frecv[7]) g << 7 << " " << frecv[7];
    else if (frecv[5]) g << 5 << " " << frecv[5];
    else if (frecv[3]) g << 3 << " " << frecv[3];
    else if (frecv[2]) g << 2 << " " << frecv[2];
    else if (frecv[1]) g << 1 << " " << frecv[1];

    g << '\n';

    f.close();
    g.close();
    return 0;
}
