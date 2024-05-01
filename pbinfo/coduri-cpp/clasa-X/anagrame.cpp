// #97 - Anagrame
#include <iostream>
#include <cstring>

using namespace std;

int solve(char cuv1[25], char cuv2[25])
{
    if (strlen(cuv1) != strlen(cuv2))
        return 0;

    for (int i = 0; i < strlen(cuv1) - 1; i++)
        for (int j = i + 1; j < strlen(cuv1); j++)
            if (int(cuv1[i]) > int(cuv1[j]))
                swap(cuv1[i], cuv1[j]);

    for (int i = 0; i < strlen(cuv2) - 1; i++)
        for (int j = i + 1; j < strlen(cuv2); j++)
            if (int(cuv2[i]) > int(cuv2[j]))
                swap(cuv2[i], cuv2[j]);

    return (strcmp(cuv1, cuv2) == 0);
}
int main()
{
    char a[25], b[25], buffer[52], sep[3] = ", ", *p;

    cin.get(buffer, 52);
    p = strtok(buffer, sep);
    strcpy(a, p);
    p = strtok(NULL, sep);
    strcpy(b, p);

    // cout<<a<<'\n'<<b<<'\n';
    cout << solve(a, b) << '\n';
    return 0;
}
