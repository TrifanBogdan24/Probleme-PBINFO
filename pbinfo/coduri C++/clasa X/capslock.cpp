// #2635 - CapsLock
#include <iostream>
#include <fstream>
#include <cstring>


using namespace std;

ifstream f("capslock.in");
ofstream g("capslock.out");

int p = 0;
char sir[100];

int main()
{
    f.getline(sir, 199);
    
    for (unsigned int i = 0; i < strlen(sir); i++)
    {
        if (sir[i] == '#')
            p = 1 - p;
        else
        {
            if (p % 2 == 1)
                sir[i] = toupper(sir[i]);
            g << sir[i];
        }
    }

    g << '\n';
    f.close();
    g.close();
    return 0;
}
