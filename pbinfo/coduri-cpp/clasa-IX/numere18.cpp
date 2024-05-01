// #2013 - numere18
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("numere18.in");
ofstream g("numere18.out");

void afisare(int begin, int end)
{
    for (int i = begin; i <= end; i++) 
        cout << i << " ";
    cout << '\n';
}

void solve_one(int n)
{
    int line = 0;
    int first_element = 0;
    int last_element = 0;

    while (line < n)
    {
        line++;
        first_element = last_element + 1;
        last_element = first_element + line - 1;
        // afisare(first_element, last_element);
    }

     // cerinta 1 => suma elementelor de pe linia cu indicele 'n'
    int sum = (first_element + last_element) * n / 2;   // n = linie
    g << sum;
}

void solve_two(int m)
{
    int line = 0;
    int first_element = 0;
    int last_element = 0;

    do {
        line++;
        first_element = last_element + 1;
        last_element = first_element + line - 1;
        // afisare(first_element, last_element);
    } while (last_element < m);

    // cerinta 2 => linia si pozitia unde se afla numarul 'm'
    int poz = m - first_element + 1;
    g << line << ' ' << poz;
}

int main ()
{
    
    int c = 0, x = 0;
    f >> c >> x;

    if (c == 1) solve_one(x);
    else if (c == 2) solve_two(x);


    f.close();
    g.close();
    return 0;
}
