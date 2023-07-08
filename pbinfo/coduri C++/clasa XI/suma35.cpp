// #319 - suma35
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("suma35.in");
ofstream g("suma35.out");

int v[1000], st[1000], i, j, n, suma = 0, f3, f5;

void afis(int k)
{
    for (int i = 1; i <= k; i++)
    {
        if (st[i] != 0)
            g << st[i] << ' ';
    }
    g << '\n';
}

void back(int k)
{
    for (int i = 3; i <= 5; i = i + 2)
    {
        st[k] = i;
        suma += i;
        
        if (suma == n)
        {
            if (st[k - 1] <= st[k])
                afis(k);
        }
        else if (suma < n)
        {
            if (st[k - 1] <= st[k])
                back(k + 1);
        }

        suma -= i;
    }
}

int main()
{
    f >> n;

    f3 = n / 3;
    f5 = n / 5;

    back(1);

    f.close();
    g.close();

    return 0;
}
