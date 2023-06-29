// #914 - HalfSort1
#include <iostream>
#include <fstream>

using namespace std;

fstream f("halfsort1.in");
ofstream g("halfsort1.out");

void sortare(int st, int dr, char c, long long v[1055]);
void afisare(int n, long long v[1055]);

void rezolvare()
{
    int n;
    long long v[1055];
    
    f >> n;
    for (int i = 1; i <= n; i++)
        f >> v[i];
    
    sortare(1, (n + 1) / 2, '<', v);
    sortare((n + 1) / 2 + 1, n, '>', v);
    afisare(n, v);
}

void sortare(int st, int dr, char c, long long v[1055])
{
    for (int i = st; i < dr; i++)
    {
        for (int j = i + 1; j <= dr; j++)
        {
            if (v[i] > v[j] && c == '<')
                swap(v[i], v[j]);
            else if (v[i] < v[j] && c == '>')
                swap(v[i], v[j]);
        }
    }
}

void afisare(int n, long long v[1055])
{
    for (int i = 1; i <= n; i++)
        g << v[i] << ' ';
}

int main()
{
    rezolvare();

    f.close();
    g.close();

    return 0;
}
