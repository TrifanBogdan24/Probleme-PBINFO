// #2004 - ore
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("ore.in");
ofstream g("ore.out");

struct ore {
    int h, m, s;
};
ore v[100];

int nr1 = 0, nr2 = 0, h1, m1, s1;

int main()
{
    for (int i = 1; i <= 2; i++)
    {
        f >> v[i].h >> v[i].m >> v[i].s;
        g << v[i].h << ": " << v[i].m << ": " << v[i].s << endl;
    }
    
    nr1 = v[1].h * 3600 + v[1].m * 60 + v[1].s;
    nr2 = v[2].h * 3600 + v[2].m * 60 + v[2].s;
    
    g << nr1 << '\n' << nr2 << '\n';
    s1 = v[1].s + v[2].s;
    
    if (s1 > 60)
    {
        s1 = s1 - 60;
        m1++;
    }
    
    m1 = m1 + v[1].m + v[2].m;
    
    if (m1 > 60)
    {
        m1 = m1 - 60;
        h1++;
    }
    
    h1 = h1 + v[1].h + v[2].h;
    g << h1 << ": " << m1 << ": " << s1;

    f.close();
    g.close();
    return 0;
}
