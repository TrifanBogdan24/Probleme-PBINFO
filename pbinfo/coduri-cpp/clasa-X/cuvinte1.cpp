// #973 - Cuvinte1
#include <iostream>
#include <cstring>

using namespace std;

char s[255], v[100][100], sep[3] = " ", *p, voc[6] = "aeiou";
int nr, ok;

int main()
{
    cin.getline(s, 255);
    p = strtok(s, sep);

    while (p)
    {
        nr++;
        strcpy(v[nr], p);
        p = strtok(NULL, sep);
        ok = 1;
        
        for (unsigned int i = 0; i < strlen(v[nr]); i++)
            if (strchr(voc, v[nr][i]) == 0)
                ok = 0;
        
        if (ok == 1)
            cout << v[nr] << '\n';
    }
    
    return 0;
}
