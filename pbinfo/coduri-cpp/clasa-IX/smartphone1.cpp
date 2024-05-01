// #2903 - Smartphone1
#include <iostream>
#include <fstream>
using namespace std;
fstream f("smartphone1.in");
ofstream g("smartphone1.out");
int n, i, NR;
long long x;

bool vecini_metoda_unu(int nr1, int nr2)
{
    if(nr1==nr2) return 0;
    if (nr1 > nr2)
    {
        int aux = nr1;
        nr1 = nr2;
        nr2 = aux;
    }
   
    if (nr2 == nr1 + 3) return 1;   // elementul de desubt 
    if (nr1 != 1 && nr1 != 4 && nr1 != 7)
    {   
        if (nr2 == nr1 + 2) return 1;   // elementul din stanga-jos
    }
    if (nr1 != 3 && nr1 != 6 && nr1 != 9)
    {
        if (nr2 == nr1 + 1) return 1;   // elementul din dreapta
        if (nr2 == nr1 + 4) return 1;   // elementul din dreapta-jos
    }
    return 0;
}

bool vecini_metoda_doi(int nr1, int nr2)
{
    if(nr1==nr2) return 0;
    if (nr1 > nr2)
    {
        int aux = nr1;
        nr1 = nr2;
        nr2 = aux;
    }
    if (nr1 == 1)
    {
        if (nr2 == 2 || nr2 == 4 || nr2 == 5) return 1;
        return 0;
    }
    if (nr1 == 2)
    {
        if (nr2 == 3 || nr2 == 4 || nr2 == 5 || nr2 == 6) return 1;
        return 0;
    }
    if (nr1 == 3)
    {

        if (nr2 == 5 || nr2 == 6) return 1;
        return 0;
    }
    if (nr1 == 4)
    {
        if (nr2 == 5 || nr2 == 7 || nr2 == 8) return 1;
        return 0;
    }
    if (nr1 == 5)
    {
        return 1; // toate celelalte taste sunt vecini ai lui 5
    }
    if (nr1 == 6)
    {
        if (nr2 == 8 || nr2 == 9) return 1;
        return 0;
    }
    if (nr1 == 7)
    {
        if (nr2 == 5 || nr2 == 8) return 1;
        return 0;
    }
    if (nr1 == 8)
    {
        if (nr2 == 9) return 1;
        return 0;
    }

    return 1;
}

bool good(int number)
{
    int nr_cifre = 0, cifre[11];
    while (number)
    {
        cifre[++nr_cifre] = number % 10;
        number /= 10;
    }

    // for (int i =  1; i <= nr_cifre; i++) cout << cifre[i];
    // cout << '\n';

    for (int i = 1; i < nr_cifre; i++)
    {
        if (vecini_metoda_doi(cifre[i], cifre[i + 1]) == 0)
            return 0;
    }
    return 1;
}

int main()
{
    f >> n;
    for (i = 1; i <= n; i++)
    {
        f >> x;
        if (good(x) == 1)
            NR++;
    }
    g << NR;
    f.close();
    g.close();
    return 0;
}
