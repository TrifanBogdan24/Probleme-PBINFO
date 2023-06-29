// #2082 - Sierpinski
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

ifstream f("sierpinski.in");
ofstream g("sierpinski.out");

int n;
char a[729][92];

bool get(int x, int y)
{

    char mask = (1 << (8 - y % 8 - 1));
    return a[x][y / 8] & mask;
}

void set(int x, int y, bool val)
{
    if (get(x, y) != val)
    {
        char mask = (1 << (8 - y % 8 - 1));
        a[x][y / 8] ^= mask;
    }
}

void sierpinski(int x, int y, int l)
{

    for (int i = 0; i < l / 3; i++)
        for (int j = 0; j < l / 3; j++)
            set(x + l / 3 + i, y + l / 3 + j, 1);

    if (l > 1)
    {
        sierpinski(x, y, l / 3);
        sierpinski(x, y + l / 3, l / 3);
        sierpinski(x, y + 2 * l / 3, l / 3);
        sierpinski(x + l / 3, y, l / 3);
        sierpinski(x + l / 3, y + 2 * l / 3, l / 3);
        sierpinski(x + 2 * l / 3, y, l / 3);
        sierpinski(x + 2 * l / 3, y + l / 3, l / 3);
        sierpinski(x + 2 * l / 3, y + 2 * l / 3, l / 3);
    }
}

void afisare(int l)
{
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < l; j++)
            g << get(i, j) << ' ';
        g << '\n';
    }
}

int main()
{
    f >> n;
    sierpinski(0, 0, pow(3, n));
    afisare(pow(3, n));

    f.close();
    g.close();
    return 0;
}
