// #1460 - serbare
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("serbare.in");
ofstream g("serbare.out");

int n, p, v[1000], v1[1000];

struct serbare {
    int nr1, nr2;
};
serbare a[1000];

int main()
{
    f >> n >> p;
    
    for (int i = 1; i <= n; i++)
    {
        f >> a[i].nr1 >> a[i].nr2;
        v[a[i].nr2] = v[a[i].nr2] + a[i].nr1;
        v1[i] = i;
    }

    for (int i = 1; i < p; i++)
    {
        for (int j = i + 1; j <= p; j++)
            if (v[i] < v[j])
            {
                swap(v[i], v[j]);
                swap(v1[i], v1[j]);
            }
    }
    
    for (int i = 1; i <= p; i++)
        g << v1[i] << " ";

    return 0;
}
