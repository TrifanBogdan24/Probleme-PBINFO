// #1886 - Rucsac1
#include <iostream>

using namespace std;

int n, G, s[10000], Max, maxx;

struct nod {
    int p;
    int g;
    int e;
};
nod v[10000];

int main()
{
    cin >> n >> G;

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i].g >> v[i].p;
        // v[i].e=v[i].p/v[i].g;
    }
    /// s[x]=valoarea maxima castigata transportand x

    for (int i = 1; i <= G; i++)
        s[i] = -1;
    
    s[0] = 0;
    maxx = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = maxx; j >= 0; j--)
        {
            if (j + v[i].g <= G)
            {
                if (s[j] != -1 && (s[j + v[i].g] < s[j] + v[i].p))
                {
                    s[j + v[i].g] = s[j] + v[i].p;
                    maxx = max(maxx, s[j] + v[i].p);
                }
            }
        }
    }

    cout << maxx << '\n';

    return 0;
}
