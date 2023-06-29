// #110 - Eliminare
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char buffer[109], aux[109], s1[109], s2[109];

    cin.getline(buffer, 109);

    for (int i = 0; i < strlen(buffer); i++)
    {
        strcpy(aux, buffer);

        strncpy(s1, aux, i);
        strcpy(aux, aux + i + 1);
        cout << s1 << aux << '\n';
    }

    return 0;
}