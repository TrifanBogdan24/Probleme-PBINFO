// #85 - InserareAsterisc

#include <iostream>
#include <cstring>

using namespace std;

int nr, ok, OK = 1;
char a[255], v[25] = "aeiou", *p, q;

int main()
{
    cin.getline(a, 255);

    p = strchr(v, q);

    for (int i = 0; i < strlen(a); i++)
    {
        p = strchr(v, a[i]);
        if (p != 0)
        {
            for (int j = strlen(a) + 1; j > i; j--)
                a[j] = a[j - 1];
            a[i + 1] = '*';
            OK = 0;
        }
    }

    if (OK == 1)
        cout << "FARA VOCALE";
    else
    {
        for (int i = 0; i < strlen(a); i++)
            cout << a[i];
    }

    cout << '\n';
    return 0;
}
