// #137 - AfisareLitere
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream f("cuvmax.in");
ofstream g("cuvmax.out");

int n, nr, ok, q, NR;
char a[150], sep[20] = " ", voc[30] = "AEIOUaeiou", *p, v[100][100];

int main()
{
    cin.getline(a, 1000);
    
    for (int i = 0; i < strlen(a); i++)
    {
        if (islower(a[i]))
        {
            ok = 1;
            for (int j = 0; j < i; j++)
                if (a[j] == a[i])
                    ok = 0;
            
            if (ok == 1)
                cout << a[i] << " ";
        }
    }

    cout << '\n';
    return 0;
}
