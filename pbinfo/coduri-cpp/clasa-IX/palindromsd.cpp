// #2375 - PalindromSD
#include <iostream>
#include <fstream>
using namespace std;
ifstream f("palindromsd.in");
ofstream g("palindromsd.out");
long long x, inv, q, v[1000];
int i, nr;

int invers(int x)
{
    int inv = 0;
    while (x)
    {
        inv = inv * 10 + x % 10;
        x /= 10;
    }
    return inv;
}

int main()
{
    while (f >> x)
    {
        // un numar este palindrom daca coincide cu inversul sau
        if (invers(x) == x) v[++nr] = x;
    }

    if (nr==0) g << "-1";
    else 
    {
        for (i = 1; i <= nr / 2; i++)
            g << v[i] << " " << v[nr - i + 1] << " ";
     
        if (nr % 2) g << v[nr / 2 + 1];
    }

    f.close();
    g.close();
    return 0;
}
