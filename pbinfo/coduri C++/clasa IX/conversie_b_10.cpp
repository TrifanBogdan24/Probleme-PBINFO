// #2318 - Conversie_B_10
#include <iostream>
#include <fstream>
using namespace std;
ifstream f("conversie_b_10.in");
ofstream g("conversie_b_10.out");
long long n, rez;
int b, i, v[20], nr;

int main()
{
    f >> n >> b;
    while(n)
    {
        v[++nr] = n % 10;
        n = n / 10;
    }
    
    for (i = 1; i <= nr / 2; i++)
        swap(v[i], v[nr - i + 1]);

    for (i = 1; i <= nr; i++)
        rez = rez * b + v[i];
    
    g << rez;
    f.close();
    g.close();
    return 0;
}
