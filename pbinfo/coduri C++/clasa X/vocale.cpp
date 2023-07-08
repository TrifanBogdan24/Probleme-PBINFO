// #11 - Vocale
#include <iostream>
#include <cstring>

using namespace std;

char v[255];

int main()
{
    cin.getline(v, 255);

    for (int i = 0; i < strlen(v); i++)
    {
        if (v[i] == 'a' || v[i] == 'e' || v[i] == 'i' || v[i] == 'o' || v[i] == 'u')
            v[i] = toupper(v[i]);
        cout << v[i];
    }

    return 0;
}
