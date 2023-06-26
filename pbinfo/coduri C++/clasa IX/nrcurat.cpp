// #3303
#include <iostream>
#include <fstream>
using namespace std;

ifstream f("nrcurat.in");
ofstream g("nrcurat.out");

int oglindit(int x)
{
    int inv = 0;
    while (x)
    {
        inv = inv * 10 + x % 10;
        x /= 10;
    }
    return inv;
}

int urma_nr(int x)
{
    int aux = x;
    int urm = 0;
    while (aux)
    {
        urm = urm * 10 + 9;
        aux /= 10;
    }
    return (urm - x);
}

int main()
{
    int x = 0, aux = 0, inv = 0, urm = 0;
    int n = 0;
    
    while (f >> x)
    {
        if (urma_nr(x) == oglindit(x)) g<<"1 ";
        else g << "0 ";
    }
    f.close();
    g.close();
    return 0;
}
