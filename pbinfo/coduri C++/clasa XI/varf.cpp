// #1354 - varf
#include <fstream>

using namespace std;

ifstream f("varf.in");
ofstream g("varf.out");

int n, v[20], sol[20];
bool ok;

bool OK(int k)
{
    int cnt = 2;
    
    while (v[sol[cnt]] > v[sol[cnt - 1]] && cnt <= k)
        ++cnt;
    
    if (cnt > k || cnt == 2)
        return false;
    
    while (v[sol[cnt]] < v[sol[cnt - 1]] && cnt <= k)
        ++cnt;
    
    if (cnt > k)
        return true;
    
    return false;
}

void Back(int k)
{
    for (int i = sol[k - 1] + 1; i <= n; ++i)
    {
        sol[k] = i;
        if (k >= 3)
        {
            if (OK(k))
            {
                ok = true;
                for (int j = 1; j <= k; ++j)
                    g << v[sol[j]] << " ";
                g << '\n';
            }
        }
        Back(k + 1);
    }
}

int main()
{
    f >> n;
    for (int i = 1; i <= n; ++i)
        f >> v[i];
    Back(1);
    if (!ok)
        g << "0";

    f.close();
    g.close();

    return 0;
}
