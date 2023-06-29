// #2797 - Cuvinte9
#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;
char a[255], sep[2] = " ", *p, v[100][10], vN[100][10];
int nr, NR, OK = 1;

int main()
{
    cin.getline(a, 255);
    p = strtok(a, sep);

    while (p)
    {
        nr++;
        strcpy(v[nr], p);
        p = strtok(NULL, sep);
        if (isdigit(v[nr][0]))
        {
            strcpy(vN[++NR], v[nr]);
            OK = 0;
        }
    }

    if (OK == 1)
        cout << "nu exista";
    else
    {
        for (int i = 1; i < NR; i++)
            for (int j = i + 1; j <= NR; j++)
                if (strcmp(vN[i], vN[j]) < 0)
                    swap(vN[i], vN[j]);
        
        cout << vN[1];
    }

    cout << '\n';
    return 0;
}
