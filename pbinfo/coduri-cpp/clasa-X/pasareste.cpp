// #891 - Pasareste
#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

char s[1000], t[1000], v[10] = "aeiou";
unsigned int nr = 0;

int main()
{
    cin.getline(s, 255);
    for (unsigned int i = 0; i < strlen(s); i++)
    {
        t[nr] = s[i];
        nr++;
        if (strchr(v, s[i]) != 0)
        {
            t[nr] = 'p';
            nr++;
            t[nr] = s[i];
            nr++;
        }
    }
    
    for (unsigned int i = 0; i < nr; i++)
        cout << t[i];

    cout << '\n';
    return 0;
}
