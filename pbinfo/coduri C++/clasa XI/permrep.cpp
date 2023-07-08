// #2205 - permrep
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream f("permrep.in");
ofstream g("permrep.out");

int n, fr[60];
int st[20];
bool pus[20];
char s[50];

void tipar()
{
    for (int i = 1; i <= n; i++)
        g << char(st[i]);

    g << '\n';
}

void back(int k)
{
    if (k == n + 1)
        tipar();
    else
    {
        for (int i = 97; i <= 122; i++)
        {
            int now = i - 97;
            if (fr[now] > 0)
            {
                st[k] = i;
                fr[now]--;
                back(k + 1);
                fr[now]++;
            }
        }
    }
}

int main()
{
    f.getline(s, 50);
    n = strlen(s);

    for (int i = 1; i <= n - 1; i++)
        for (int j = i + 1; j <= n; j++)
            if (int(s[i - 1] > int(s[j - 1])))
                swap(s[i - 1], s[j - 1]);

    for (int i = 1; i <= n; i++)
        fr[s[i - 1] - 'a']++;

    /// int('a')=97;
    /// int('z'0=122;
    // g<<s;
    
    back(1);

    f.close();
    g.close();

    return 0;
}
