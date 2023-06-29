// #113 - NumePrenume
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char nume[21], prenume[21];
    
    cin >> prenume;
    cin >> nume;

    for (int i = 0; i < strlen(nume); i++)
        if (strchr("aeiuoAEIOU", nume[i]) == NULL)
            cout << nume[i];
    
    cout << " ";
    cout << prenume;
    
    cout << '\n';
    return 0;
}
