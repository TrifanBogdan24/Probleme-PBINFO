// #323 - PartitiiNumar3
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("partitiinumar3.in");
ofstream g("partitiinumar3.out");

int n, a, b, st[1000], suma;

void afis(int k)
{
    for (int i = 1; i <= k; i++)
        g << st[i] << ' ';
    g << '\n';
}

void back(int k)
{
    if (k <= n)
    {
        if (k == 1)
        {
            for (int i = a; i <= b; i++)
            {
                st[k] = i;
                suma += i;
                if (suma == n)
                    afis(k);
                back(k + 1);
                suma -= i;
            }
        }
        else
        {
            for (int i = st[k - 1]; i <= b; i++)
            {
                st[k] = i;
                suma += i;
                if (suma == n)
                    afis(k);
                back(k + 1);
                suma -= i;
            }
        }
    }
}

int main()
{
    f >> n >> a >> b;
    
    if (a > b)
        swap(a, b);
    
    back(1);

    f.close();
    g.close();

    return 0;
}
