// #515 - SortSD
#include <fstream>
#include <iostream>
#include <algorithm>
using namespace std;

int n,i;
struct divizori {
    long long val;
    long long nr;
};
divizori v[1009];

long long div(long long x)
{
    long long d, nr = 0;
    for( d = 1; d * d <= x; d++)
    {
        if (x % d == 0)
        {
            nr = nr + d;
            if (x % (x / d) == 0&& x /d != d)
                nr = nr + x / d;
        }
    }
 return nr;
}


bool cmp(divizori a, divizori b)
{
   if (a.nr == b.nr)
   {
        if (a.val < b.val) return 1;
        else return 0;
   } else
   {
        if (a.nr < b.nr) return 1;
        else return 0;
    }
}

int main()
{
    cin >> n;
    for (i = 1; i<= n; i++)
    {
        cin >> v[i].val;
        v[i].nr = div(v[i].val);
    }
    sort(v + 1, v + n + 1, cmp);
    for(i = 1; i <= n; i++)
        cout << v[i].val <<' ';
    return 0;
}
