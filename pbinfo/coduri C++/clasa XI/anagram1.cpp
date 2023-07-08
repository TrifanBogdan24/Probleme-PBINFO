// #194 - Anagram1
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream f("anagrame1.in");
ofstream g("anagrame1.out");

int n, st[100];
char a[100];

void afis()
{
    for (int i = 1; i <= n; i++)
        g << a[st[i] - 1];
    g << '\n';
}

bool OK(int k)
{
    for (int i = 1; i < k; i++)
        if (st[i] == st[k])
            return 0;
    return 1;
}

void back(int k)
{
    if (k > n)
        afis();
    else
    {
        for (int i = 1; i <= n; i++)
        {
            st[k] = i;
            if (OK(k))
                back(k + 1);
        }
    }
}

int main()
{
    f.getline(a, 100);
    n = strlen(a);

    for (int i = 1; i <= n; i++)
        st[i] = i;
    
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (int(a[i]) > int(a[j]))
                swap(a[i], a[j]);
    
    back(1);

    f.close();
    g.close();
    
    return 0;
}
