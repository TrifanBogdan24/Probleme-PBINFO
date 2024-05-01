// #136 - NumarareCuvinte
#include <iostream>
#include <cstring>

using namespace std;

int n, nr, ok, q, NR;
char a[150], sep[20] = " ", voc[30] = "AEIOUaeiou", *p, v[100][100];

int main()
{
    cin.getline(a, 1000);
    p = strtok(a, sep);
    
    while (p)
    {
        strcpy(v[++nr], p);
        p = strtok(NULL, sep);
        if (strchr(voc, v[nr][0]) != 0 && strchr(voc, v[nr][strlen(v[nr]) - 1]) != 0)
            NR++;
    }
    
    cout << NR << '\n';
    return 0;
}
