// #1835 - twoop
#include <iostream>
#include <fstream>
using namespace std;
ifstream f("twoop.in");
ofstream g("twoop.out");
int n, st, dr, poz, nrop1, nrop2;
long long val, a[100005], b[100005];
int main()
{
    f >> n >> nrop1 >> nrop2;
    for (int i = 1; i <= n; i++)
        f >> a[i];

    for (int i = 1; i <= nrop1; i++)
    {
        f >> st >> dr >> val;
        b[st] += val;
        b[dr + 1] -= val;
    }

    for (int i = 1; i <= n + 1; i++)
        b[i] = b[i] + b[i - 1];

    for (int i = 1; i <= n; i++)
        a[i] = b[i] + a[i];

    for (int i = 1; i <= nrop2; i++)
    {
        f >> poz;
        g << a[poz] << '\n';
    }
    f.close();
    g.close();
    return 0;
}
