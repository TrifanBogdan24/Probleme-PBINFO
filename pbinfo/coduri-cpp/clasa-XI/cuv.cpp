// #2710 - cuv
#include <iostream>
#include <cstring>
using namespace std;

int n;
char c[70], cuv[10][10], *p, sep[3] = ", ", rasp[10], R[10];
bool OK = 1;

void calc()
{
    if (OK == 1)
    {
        strcpy(R, rasp);
        OK = 0;
    }
    else if (strcmp(rasp, R) < 0)
        strcpy(R, rasp);
}

bool verificare(int k)
{
    for (int i = 0; i < k; i++)
        if (rasp[i] == rasp[k])
            return 0;

    return 1;
}

void back(int k)
{
    if (k > n - 1)
        calc();
    else
    {
        for (int i = 0; i < strlen(cuv[k + 1]); i++)
        {
            rasp[k] = cuv[k + 1][i];
            if (k == 0)
                back(k + 1);
            else
            {
                if (verificare(k) == 1)
                    back(k + 1);
            }
        }
    }
}

int main()
{
    cin >> n;
    cin.get();
    cin.get(c, 70);
    n = 0;
    p = strtok(c, sep);
    
    while (p)
    {
        strcpy(cuv[++n], p);
        p = strtok(NULL, sep);
    }

    /*
    for(d=1;d<=n;d++)
    {
     for(i=0;i<strlen(cuv[d])-1;i++)
            for(j=i+1;j<strlen(cuv[d]);j++)
            if(cuv[d][i]>cuv[d][j])swap(cuv[d][i],cuv[d][j]);

    }
    */
    // for(i=1;i<=n;i++)cout<<cuv[i]<<'\n';

    back(0);
    
    cout << R << '\n';
    return 0;
}
