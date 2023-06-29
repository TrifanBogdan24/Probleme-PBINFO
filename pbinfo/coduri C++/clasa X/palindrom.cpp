// #88 - Palindrom
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream f("palindrom.in");
ofstream g("palindrom.out");



bool pal(char s[20])
{
    unsigned int len = strlen(s);

    for (int i = 0; i < len / 2; i++)
        if (s[i] != s[len - 1 - i])
            return 0;

    return 1;
}

int main()
{
    int n = 0;
    char sir[20];

    f >> n;
    f.get();

    for (int i = 1; i <= n; i++)
    {
        f.getline(sir, 20);        
        g << pal(sir) << '\n';
    }

    f.close();
    g.close();
    return 0;
}
