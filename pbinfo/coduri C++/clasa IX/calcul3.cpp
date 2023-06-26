// #1882 - calcul3
#include <iostream>
#include <fstream>
using namespace std;
ifstream f("calcul3.in");
ofstream g("calcul3.out");

char s[1000],*p;

int eval();
int term();

int eval()
{
    int r=term();

    while (*p == '+' || *p == '-')
    {
        if (*p == '+')
        {
            p++;
            r+=term();
        } else {
            p++;
            r-=term();
        }
    }
    return r;
}

int term()
{
    int q = 0;
    if (*p >= '0' && *p <= '9')
    {
        q = *p - '0';
        p++;
    } else
        q=0;

    return q;
}

int main()
{
    f.getline(s,1000);
    p = s;
    g << s << eval();
    f.close();
    g.close();
    return 0;
}
