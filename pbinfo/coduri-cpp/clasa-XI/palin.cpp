// #1872 - Palin
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream f("palin.in");
ofstream g("palin.out");

int n, a[4009][4009];
char sir[4009], oglindit[40009];

int main()
{
    f >> n;
    f.get();
    f.getline(sir, 40009);

    for (int i = 0; i < n; i++)
        oglindit[i] = sir[n - i - 1];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (sir[i - 1] == oglindit[j - 1])
                a[i][j] = a[i - 1][j - 1] + 1;
            else
                a[i][j] = max(a[i - 1][j], a[i][j - 1]);
            // cout<<a[i][j]<<' ';
        }
    }
   
    g << (n - a[n][n]) << '\n';

    f.close();
    g.close();
    return 0;
}
