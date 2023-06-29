// #1456 - Cuvant
#include <iostream>
#include <cstring>

using namespace std;

char a[105], voc[25] = "aeou";
int ok = 1;

int main()
{
    cin.getline(a, 105);
    
    for (unsigned int i = 0; i < strlen(a); i++)
    {
        if (strchr(voc, a[i]) != 0)
            ok = 0;
        
        if (i <= strlen(a) - 2 && a[i] == 'i' && a[i + 1] == 'i')
            ok = 0;
    }
    
    if (ok == 1)
        cout << "DA";
    else
        cout << "NU";
    
    cout << '\n';
    return 0;
}
