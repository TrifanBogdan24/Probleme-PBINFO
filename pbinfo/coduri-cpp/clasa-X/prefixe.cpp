// #13 - Prefixe
#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

char sir[100], q;

int main()
{
    cin.getline(sir, 255);

    for (int i = 0; i < strlen(sir); i++)
    {
        for (int j = 0; j < strlen(sir) - i; j++)
            cout << sir[j];
        cout << '\n';
    }
    
    for (int i = strlen(sir); i >= 1; i--)
    {
        for (int j = strlen(sir) - i; j < strlen(sir); j++)
            cout << sir[j];
        cout << '\n';
    }

    return 0;
}
