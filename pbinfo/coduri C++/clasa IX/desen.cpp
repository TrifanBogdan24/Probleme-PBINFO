// #1412 - Desen
#include <iostream>
using namespace std;

void caz_unu(int n)
{
      // patrat (n linii, n coloane), linia 'i' va contine doar 'i'
      for (int i = 1; i <= n; i++)
      {
            for (int j = 1; j <= n; j++) cout << i;
            cout << '\n';
      }
      return;
}

void caz_doi(int n)
{
      // creem un romb -> doua patrate

      for (int i = 1; i <= n; i++)
      {
            // patratul superior
            for (int j = 1; j <= n - i; j++) cout << ' ';
            for (int j = n - i + 1; j <= n + i - 1; j++) cout << i;
            for (int j = n + i; j <= n; j++) cout << ' ';
            cout << '\n';
      }

      for (int i = n - 1; i >= 1; i--)
      {
            // patratul inferior
            for (int j = 1; j <= n - i; j++) cout << ' ';
            for (int j = n - i + 1; j <= n + i - 1; j++) cout << i;
            for (int j = n + i; j <= n; j++) cout << ' ';
            cout << '\n';
      }
      return;
}

void caz_trei(int n)
{
      // dreptunghi cu n linii si 2*n coloane, linia 'i' va contine doar 'i'
      for (int i = 1; i <= n; i++)
      {
            for (int j = 1; j <= n * 2; j++) cout << i;
            cout << '\n';
      }
      return;
}

void caz_patru(int n)
{
      // triunghi : pe prima linia un 1 in centru, pe a doua trei de 2 in centru etc
      for(int i = 1; i <= n; i++)
      {
            for (int j = 1; j <= n - i; j++) cout << ' ';
            for (int j = n - i + 1; j <= n + i - 1; j++) cout << i;
            for (int j = n + i; j <= n; j++) cout << ' ';
            cout << '\n';
      }
      return;
}

int main()
{
      int n = 0, c = 0;
      cin >> c >> n;
      if (c == 1) caz_unu(n);
      else if (c == 2) caz_doi(n);
      else if (c == 3) caz_trei(n);
      else if (c == 4) caz_patru(n);
      return 0;
}
