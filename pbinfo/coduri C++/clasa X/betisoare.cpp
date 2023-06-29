// #1126 - Betisoare
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream f("betisoare.in");
ofstream g("betisoare.out");

int n;
char s[1000010], *p;

long long eval();
long long term();
long long fact();

long long eval()
{
    long long r;
    r = term();
    while (*p == '+' || *p == '-')
    {
        if (*p == '+')
        {
            p++;
            r += term();
        }
        else if (*p == '-')
        {
            p++;
            r -= term();
        }
    }
    return r;
}

long long term()
{
    long long r = fact();
    while (*p == '*' || *p == '/')
    {
        if (*p == '*')
        {
            p++;
            r *= fact();
        }
        else if (*p == '/')
        {
            p++;
            r = r / fact();
        }
    }
    return r;
}

long long fact()
{
    long long r = 0;
    if (*p == '(')
    {
        p++;
        r = eval();
        p++;
    }
    else
    {
        while (*p == 'I')
        {
            r++;
            p++;
        }
    }
    return r;
}

int main()
{
    f >> n;
    f.get();
    
    for (int i = 1; i <= n; i++)
    {
        f.getline(s, 1000010);

        p = s;
        g << eval() << "\n";
    }

    f.close();
    g.close();
    return 0;
}
