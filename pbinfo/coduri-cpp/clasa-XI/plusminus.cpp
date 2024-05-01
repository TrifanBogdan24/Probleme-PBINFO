// #1357 - plusminus
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("plusminus.in");
ofstream g("plusminus.out");

int n, st[1000];
int suma = 0;
bool OK = 1;

void afis()
{
    for (int i = 1; i <= n; i++)
    {
        if (st[i] == 1)
            g << "- ";
        else
            g << "+ ";
    }
    g << '\n';
    OK = 0;
}

void back(int k)
{
    int i;
    if (k > n)
    {
        if (suma == n)
            afis();
    }
    else
    {
        for (int i = 1; i <= 2; i++)
        {
            st[k] = i;
            if (i == 1)
                suma -= k * k;
            else
                suma += k * k;

            back(k + 1);

            if (i == 1)
                suma += k * k;
            else
                suma -= k * k;
        }
    }
}

int main()
{
    f >> n;
    back(1);

    if (OK == 1)
        g << "IMPOSIBIL";
    /// int ASCII: '+'=43;'-'=45

    f.close();
    g.close();

    return 0;
}
