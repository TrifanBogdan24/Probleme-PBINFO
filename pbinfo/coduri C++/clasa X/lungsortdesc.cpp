// #2692 - LungSortDesc
#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

char s[255], v[100][30], sep[2] = " ", *p;
int nr = 0;

int main()
{
    cin.getline(s, 255);
    p = strtok(s, sep);

    while (p)
    {
        strcpy(v[++nr], p);
        p = strtok(NULL, sep);
    }

    for (int i = 1; i < nr; i++)
    {
        for (int j = i + 1; j <= nr; j++)
        {
            if (strlen(v[i]) < strlen(v[j]))
                swap(v[i], v[j]);
            else if (strlen(v[i]) == strlen(v[j]) && strcmp(v[i], v[j]) > 0)
                swap(v[i], v[j]);
        }
    }

    for (int i = 1; i <= nr; i++)
        cout << v[i] << '\n';
    
    return 0;
}
