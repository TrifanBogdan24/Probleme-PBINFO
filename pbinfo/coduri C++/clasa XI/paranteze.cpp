// #344 - Paranteze
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("paranteze.in");
ofstream g("paranteze.out");

int st[101], n;

void tipar()
{
    for (int i = 1; i <= n; i++)
    {
        if (st[i] == 0)
            g << "(";
        else
            g << ")";
    }
    
    g << '\n';
}

bool continua(int p)
{
    int nr0 = 0, nr1 = 0;
    bool ok = 1;
    
    for (int i = 1; i <= p; i++)
    {
        if (st[i] == 0)
            nr0++;
        else
            nr1++;
    }

    if (nr0 > n / 2)
        ok = 0;
    
    if (nr1 > nr0)
        ok = 0;

    return ok;
}

/*
bool continua(int p)
{
int i,k=0;
for(i=1;i<=p;i++)
{if(st[i]==0)k++;
 else k--;
}
if(k<0)return false;
else return true;
}*/

void back_paranteze(int p)
{
    for (int i = 0; i <= 1; i++)
    {
        st[p] = i;
        if (continua(p))
        {
            if (p == n)
                tipar();
            else
                back_paranteze(p + 1);
        }
    }
}

int main()
{
    f >> n;
    
    back_paranteze(1);

    f.close();
    g.close();

    return 0;
}
