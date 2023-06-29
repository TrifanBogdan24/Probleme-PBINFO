// #892 - Pasareste1
#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

char s[1000], t[1000], v[10] = "aeiou";
unsigned int nr = 0, i = 0;

int main()
{
    cin.getline(s, 255);
    i = 0;
    while (i < strlen(s))
    {
        if (strchr(v, s[i]) != 0 && strchr(v, s[i + 2]) != 0)
        {
            if (s[i + 1] == 'p')
            {
                t[nr] = s[i];
                i = i + 3;
                nr++;
            }
        }
        else
        {
            t[nr] = s[i];
            i++;
            nr++;
        }
    }
    
    cout << t << '\n';
    return 0;
}
