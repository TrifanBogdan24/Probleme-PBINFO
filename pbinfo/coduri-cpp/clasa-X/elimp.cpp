// #2803 - ElimP
#include <iostream>
#include <cstring>

using namespace std;

int p = 0;
char s[10000], x[10000], y[10000];

int main()
{
    cin >> p;
    cin.get();
    cin.getline(s, 1000);

    if (p >= strlen(s))
        cout << ' ';
    else
    {
        strcpy(x, s);
        strcpy(x, x + p);
        cout << x << '\n';

        for (int i = 1; i < strlen(s) - p; i++)
        {
            strncpy(x, s, i);

            cout << x << '\n';
        }

        strncpy(x, s, strlen(s) - p);
        cout << x;
    }

    cout << '\n';
    return 0;
}