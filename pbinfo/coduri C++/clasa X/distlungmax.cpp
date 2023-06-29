// #2738 - DistLungMax
#include <iostream>
#include <cstring>

using namespace std;

char s[255], v[100][30], sep[2] = " ", *p, q[100];
int Max, nr, OK = -1, ok;

int main()
{
    cin.getline(s, 200);
    p = strtok(s, sep);
    
    while (p)
    {
        strcpy(v[++nr], p);
        p = strtok(NULL, sep);

        ok = 1;
        
        for (unsigned int i = 0; i < strlen(v[nr]) - 1; i++)
            for (unsigned int j = i + 1; j < strlen(v[nr]); j++)
                if (v[nr][i] == v[nr][j])
                    ok = 0;
        
        if (ok == 1)
        {
            OK = 0;
            if (strlen(v[nr]) > Max)
            {
                Max = strlen(v[nr]);
                strcpy(q, v[nr]);
            }
        }
    }
    
    if (OK == -1)
        cout << OK;
    else
        cout << q;
    
    cout << '\n';
    return 0;
}
