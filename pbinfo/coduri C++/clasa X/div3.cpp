// #996 - Div3
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream f("div3.in");
ofstream g("div3.out");

long long v[1000];
int n;

int suma_cifre(int x)
{
    int sum = 0;
    while (x != 0)
    {
        sum = sum + x % 10;
        x = x / 10;
    }

    return sum;
}

int main()
{
    f >> n;
    for (int i = 1; i <= n; i++)
        f >> v[i];

    for (int i = 1; i <= n; i++)
        if (suma_cifre(v[i]) % 3 == 0)
            g << v[i] << " ";

    g << '\n';

    f.close();
    g.close();
    return 0;
}
