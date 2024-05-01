// #2527 - hanoi
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("hanoi.in");
ofstream g("hanoi.out");

char a = 'A', b = 'B', c = 'C';

struct nod {
    char p, u;
};

nod v[100000];
int n = 0, nr = 0;

void han(int n, char a, char b, char c)
{
    if (n == 1)
    {
        v[++nr].p = a;
        v[nr].u = b;
    }
    else
    {
        han(n - 1, a, c, b);
        v[++nr].p = a;
        v[nr].u = b;
        han(n - 1, c, b, a);
    }
}

void afis()
{
    g << nr << '\n';
    for (int i = 1; i <= nr; i++)
        g << v[i].p << "->" << v[i].u << '\n';
}

int main()
{
    f >> n;
    a = 'A';
    b = 'C';
    c = 'B';

    han(n, a, b, c);
    afis();

    f.close();
    g.close();
    return 0;
}
