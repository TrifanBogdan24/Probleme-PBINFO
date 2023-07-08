// #320 - ParititiiNumar
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("partitiinumar.in");
ofstream g("partitiinumar.out");

int st[100], n, suma, v[1000];

void afis()
{
    for (int i = 1; i <= n; i++)
    {
        int nr = st[i];
        
        while (nr != 0)
        {
            g << v[i] << ' ';
            nr--;
        }
    }

    g << '\n';
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
        for (int i = n / v[k]; i >= 0; i--)
        {
            st[k] = i;
            suma = suma + i * v[k];
            if (suma <= n)
                back(k + 1);
            suma = suma - i * v[k];
        }
    }
}

int main()
{
    f >> n;
    
    for (int i = 1; i <= n; i++)
        v[i] = i;
    
    back(1);

    f.close();
    g.close();

    return 0;
}
