// #3112 - Bac_Cuvinte
#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

char a[255], sep[2] = " ", *p, v[100][10], vN[100][10];
int n, nr, OK = 1;

int main()
{
    cin.getline(a, 255);
    cin >> n;
    p = strtok(a, sep);
    
    while (p)
    {
        nr++;
        strcpy(v[nr], p);
        p = strtok(NULL, sep);
    
        if (strlen(v[nr]) == n)
        {
            cout << v[nr] << '\n';
            OK = 0;
        }
    }
    
    if (OK == 1)
        cout << "nu exista";

    return 0;
}
