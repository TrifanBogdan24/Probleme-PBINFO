// #2828 - Acronim
#include <iostream>
#include <cstring>

using namespace std;

int nr, ok, i, q = 0;
char a[105], abrev[25], cuv[100][20], *p, sep[2] = " ";

int main()
{
    cin.getline(a, 105);
    p = strtok(a, sep);

    while (p)
    {
        strcpy(cuv[++nr], p);
        p = strtok(NULL, sep);

        if (isupper(cuv[nr][0]))
        {
            abrev[q] = cuv[nr][0];
            q++;
        }

    }
    cout << abrev << '\n';
    return 0;
}
