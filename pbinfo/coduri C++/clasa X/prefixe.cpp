// #13 - Prefixe
#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;


int main()
{
    char sir[100];
    cin.getline(sir, 255);
    
    for (unsigned int i = 0; i < strlen(sir); i++)
    {
        for (unsigned int j = 0; j < strlen(sir) - i; j++)
            cout << sir[j];
        cout << '\n';
    }
    
    for (unsigned int i = strlen(sir); i >= 1; i--)
    {
        for (unsigned int j = strlen(sir) - i; j < strlen(sir); j++)
            cout << sir[j];
        cout << '\n';
    }
    
    return 0;
}
