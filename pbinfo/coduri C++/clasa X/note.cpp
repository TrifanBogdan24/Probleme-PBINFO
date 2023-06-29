// #2813 - Note
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;


char txt[255], nota[7][4] = {"DO", "RE", "MI", "FA", "SOL", "LA", "SI"}, *p, sep[2] = " ";
bool OK = 0;

bool contains_nota_muzicala(char sir[255])
{
    for (int i = 0; i < 7; i++)
        if (strstr(sir, nota[i]) != NULL)
            return 1;

    return 0;
}

int main()
{
    cin.getline(txt, 255);
    p = strtok(txt, sep);
    while (p)
    {
        if (contains_nota_muzicala(p))
        {
            cout << p << '\n';
            OK = 1;
        }

        p = strtok(NULL, sep);
    }

    if (!OK)
        cout << "nu exista\n";

    return 0;
}