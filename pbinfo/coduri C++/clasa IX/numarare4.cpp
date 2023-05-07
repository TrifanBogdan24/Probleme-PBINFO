#include <iostream>
using namespace std;
int n,v[205],nr,i;

bool prim(int a, int b)
{
    while (a != b)
    {
        if (a > b) a = a - b;
        else b = b - a;
    }
    if (b == 1) return 1;
    else return 0;
}

int main()
{
    cin>>n;
    for (i = 1; i <= n; i++) cin>>v[i];
    
    for (i = 1; i < n; i++)
        if (prim(v[i], v[n]) == 1)
            nr++;
    
    cout << nr;
    return 0;
}
