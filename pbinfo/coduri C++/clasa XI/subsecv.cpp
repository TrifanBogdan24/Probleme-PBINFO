// #1262 - subsecv
#include <fstream>
using namespace std;

ifstream f("subsecv.in");
ofstream g("subsecv.out");

int i, j, n, x;
short int a[10005], fr[10005];

int main()
{
    f >> n;
    for (i = 1; i <= n; i++)
    {
        f >> x;
        a[i] = (a[i - 1] + x % n) % n;
        
        if (a[i] == 0)
            break;
        
        fr[a[i]]++;
    }

    if (i <= n)
    {
        g << 1 << ' ' << i;
    }
    else
    {
        for (i = 1; i <= n; i++)
            if (fr[a[i]] >= 2)
                break;
        
        for (j = i + 1; j <= n; j++)
        {
            if (a[i] == a[j])
            {
                g << i + 1 << ' ' << j;
                break;
            }
        }
    }
    return 0;
}
