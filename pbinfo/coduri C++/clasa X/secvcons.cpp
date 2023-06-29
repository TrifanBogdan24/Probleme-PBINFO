// #886 - SecvCons
#include <iostream>
#include <cstring>

using namespace std;

char s[255], voc[20] = "aeiou";
unsigned int Max, nr, poz1, poz2;

int main()
{
    cin.getline(s, 200);
    
    for (unsigned int i = 0; i < strlen(s) - 1; i++)
    {
        unsigned int j = i;
        nr = 0;
        while (strchr(voc, s[j]) == 0 && j < strlen(s))
        {
            j++;
            nr++;
        }
        if (nr >= Max)
        {
            Max = nr;
            poz1 = i;
            poz2 = j - 1;
        }
    }
    
    for (unsigned int j = poz1; j <= poz2; j++)
        cout << s[j];

    cout << '\n';
    return 0;
}
