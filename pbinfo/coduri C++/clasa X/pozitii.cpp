// #972 - Pozitii
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;



int main()
{
    int nr = 0, nr_cons = 0;
    char s[255], voc[20] = "aeiou", cons[255];
    
    for (char it = 'a'; it <= 'z'; it++)
        if (!strchr(voc, it))
            cons[nr_cons++] = it;

    cons[nr_cons] = '\n';

    cin.get(s, 255);
    for (int i = 1; i <= strlen(s) - 2; i++)
        if (strchr(voc, s[i]) != 0 && strchr(cons, s[i - 1]) && strchr(cons, s[i + 1]))
            nr++;

    cout << nr << '\n';
    return 0;
}
