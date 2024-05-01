// #1335 - Caractere
#include <iostream>
#include <cstring>

using namespace std;

char a[250], b[250], *p;
int n;

int main()
{
    cin.getline(a, 255);
    cin.getline(b, 255);
    
    for (unsigned int i = 0; i < strlen(a); i++)
        if (strchr(b, a[i]) != 0)
            cout << a[i];
    
    cout << '\n';
    return 0;
}
