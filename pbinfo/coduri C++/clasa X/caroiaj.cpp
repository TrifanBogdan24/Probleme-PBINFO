// #3374 - caroiaj
#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

ifstream f("caroiaj.in");
ofstream g("caroiaj.out");

int n, k, Max, ST, DR;
char sir[250005], s[505][505];

void form_sir()
{
    for (int r = 1; r <= (n + 1) / 2; r++)
    {
        for (int j = r; j <= n - r + 1; j++)
        {
            sir[k] = s[r][j - 1];
            sir[++k] = '\0';
        }

        for (int i = r + 1; i <= n - r + 1; i++)
        {
            sir[k] = s[i][n - r];
            sir[++k] = '\0';
        }

        for (int j = n - r; j >= r; j--)
        {
            sir[k] = s[n - r + 1][j - 1];
            sir[++k] = '\0';
        }

        for (int i = n - r; i > r; i--)
        {
            sir[k] = s[i][r - 1];
            sir[++k] = '\0';
        }
    }
}

void citire()
{
    f >> n;
    f.get();
    for (int i = 1; i <= n; i++)
        for (int j = 0; j < n; j++)
            f >> s[i][j];

    return;
}

void palindrom()
{
    int L, p, p1, p2;

    for (int c = k - 2; c > 0; c--)
    {
        if (sir[c] != sir[c + 1]) // astfel depistam un subsir cu un nr impar de elemente
        {
            p1 = c - 1;
            p2 = c + 1;

            while (sir[p1] == sir[p2] && sir[p1] != '\0')
            {
                p1--;
                p2++;
            }
        }
        else if (sir[c] == sir[c + 1]) // acum luam cazul sirului palindrom cu nr par de elemente
        {
            p1 = c - 1;
            p2 = c + 2; // elem de pe poz c si c+1 reprezinta mijlocul subsirului

            while (sir[p1] == sir[p2] && sir[p1] != '\0')
            {
                p1--;
                p2++;
            }
        }

        p1++;
        p2--;
        L = p2 - p1 + 1;
        if (L > Max)
        {
            Max = L;
            ST = p1;
            DR = p2;
            // cout<<ST<<' '<<DR<<'\n';
        }
    }
    // cout <<ST<<' '<<DR;

    for (int i = ST; i <= DR; i++)
        g << sir[i];
}

int main()
{
    citire();

    form_sir();
    Max = 1;
    ST = DR = k - 1;
    palindrom();

    // for (int i=0;i<k;i++) g << sir[i];

    return 0;
}
