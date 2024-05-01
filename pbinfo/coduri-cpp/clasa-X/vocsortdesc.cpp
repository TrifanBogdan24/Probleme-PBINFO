// #2693 - VocSortDesc
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream f("palindrom.in");
ofstream g("palindrom.out");

char s[255], sep[20] = ", .?!/", *p, v[1000][100], voc[20] = "AEIOUaeiou";
int r, ok, n, N[1000], nr;

int main()
{
    cin.getline(s, 255);
    p = strtok(s, sep);

    while (p)
    {
        nr++;
        strcpy(v[nr], p);
        p = strtok(NULL, sep);
        for (int j = 0; j < strlen(v[nr]); j++)
            if (strchr(voc, v[nr][j]) != 0)
                N[nr]++;
    }

    for (int i = 1; i < nr; i++)
    {
        for (int j = i + 1; j <= nr; j++)
        {
            if (N[i] < N[j])
            {
                swap(N[i], N[j]);
                swap(v[i], v[j]);
            }
            else if (N[i] == N[j])
            {
                if (strlen(v[i]) < strlen(v[j]))
                    swap(v[i], v[j]);
                else if (strlen(v[i]) == strlen(v[j]))
                {
                    if (strcmp(v[i], v[j]) > 0)
                        swap(v[i], v[j]);
                }
            }
        }
    }

    for (int i = 1; i <= nr; i++)
        cout << v[i] << '\n';

    return 0;
}
