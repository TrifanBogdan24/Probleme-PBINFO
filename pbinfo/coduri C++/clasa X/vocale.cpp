// #11 - Vocale
#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

char sir[21];

int main()
{
    cin.getline(sir, 21);
    
    for (unsigned int i = 0; i < strlen(sir); i++)
    {
        if (strchr("aeiou", sir[i]))
            sir[i] = toupper(sir[i]);
        
        cout << sir[i];
    }

    cout << '\n';
    return 0;
}
