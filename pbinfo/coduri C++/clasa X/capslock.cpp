// #2635 - CapsLock

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream f("capslock.in");
ofstream g("capslock.out");

int p = 0;
char a[100];

int main()
{
    f.getline(a, 199);
    
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == '#')
            p++;
        else
        {
            if (p % 2 == 1)
                a[i] = toupper(a[i]);
            g << a[i];
        }
    }

    f.close();
    g.close();

    return 0;
}
