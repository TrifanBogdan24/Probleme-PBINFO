// #609 - DublareVocale
#include <iostream>
#include <cstring>

using namespace std;

char s[255], v[100][100], sep[3] = " ", *p, voc[6] = "aeiou";
int nr, ok, i, j;

int main()
{
    cin.getline(s, 255);
    i = 0;
    nr = strlen(s) - 1;
    
    while (i <= nr)
    {
        if (strchr(voc, s[i]) != 0)
        {
            for (j = nr + 1; j > i; j--)
                s[j + 1] = s[j];
            nr++;
            s[i + 1] = s[i];
            i = i + 2;
        }
        else
            i++;
    }
    
    cout << s << '\n';
    return 0;
}
