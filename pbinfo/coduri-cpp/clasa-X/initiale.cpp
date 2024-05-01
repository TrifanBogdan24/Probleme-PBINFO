// #12 - Initiale
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char a[257];
    cin.getline(a, 257);
    
    a[0] = toupper(a[0]);
    a[strlen(a) - 1] = toupper(a[strlen(a) - 1]);
    
    for (int i = 1; i < strlen(a) - 1; i++)
        if (isalpha(a[i]))
            if (a[i + 1] == ' ' || a[i - 1] == ' ')
                a[i] = toupper(a[i]);

    cout << a << '\n';
    return 0;
}