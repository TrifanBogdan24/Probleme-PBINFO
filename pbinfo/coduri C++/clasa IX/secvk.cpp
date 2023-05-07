// #134 - SecvK
#include <iostream>
#include <fstream>
using namespace std;
ifstream f("secvk.in");
ofstream g("secvk.out");
int n, k, i, a[100005], st, dr;
long long Max = -1, s[100055];
bool ok = 1;

void afis(int st,int dr)
{
    for (int i = st; i <= dr; i++)
        g << a[i] << ' ';
}


void citire()
{
    f >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        f >> a[i];
        s[i] = s[i - 1] + a[i];
    }
}


int main()
{
    citire();
    for (int i = 1; i <= n - k + 1; i++)
    {
        if (s[i + k - 1] - s[i - 1] > Max)
        {
            Max = s[i + k - 1] - s[i - 1];
            st = i;
            dr = i + k - 1;
        }
    }
    afis(st, dr);
    return 0;
}
