// #2728 - Skyline
#include <iostream>
#include <fstream>

#define ll long long
#define N_MAX 40010

using namespace std;

ifstream f("skyline.in");
ofstream g("skyline.out");

ll n, top, TOTAL, x, st[N_MAX], sum[N_MAX], s[N_MAX], d[N_MAX];

struct pct {
    ll h, l;
} v[N_MAX];

int main()
{
    f >> n;
    for (int i = 1; i <= n; ++i)
        f >> v[i].h >> v[i].l, sum[i] = sum[i - 1] + v[i].l;
    
    top = 0;
    st[top] = 0;
    for (int i = 1; i <= n; ++i)
    {
        while (top > 0 && v[i].h <= v[st[top]].h)
            --top;
        s[i] = st[top];
        st[++top] = i;
    }
    
    top = 0;
    st[top] = n + 1;
    for (int i = n; i >= 1; --i)
    {
        while (top > 0 && v[i].h <= v[st[top]].h)
            --top;
        d[i] = st[top];
        st[++top] = i;
    }
    
    for (int i = 1; i <= n; ++i)
    {
        x = v[i].h * (sum[d[i] - 1] - sum[s[i]]);
        if (x > TOTAL)
            TOTAL = x;
    }
    
    g << TOTAL << '\n';

    f.close();
    g.close();
    return 0;
}
