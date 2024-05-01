#include <iostream>
#include <fstream>
using namespace std;
fstream f("date.in");
int c1, c2, i, j, d;

int main()
{
    cin >> c1 >> c2;

    for (i = c1; i <= 9; i++) // mii
    {
        for (j = 0; j <= 8; j = j + 2) // sute si unitati
        {
            for (d = 0; d <= c2; d++)
                cout << i << j << d << j << '\n';
        }
    }
    f.close();
    return 0;
}
