// #85 - InserareAsterisc
#include <iostream>
#include <cstring>

using namespace std;

bool OK = 1;
char sir[101], v[6] = "aeiou", *p;

int main()
{
    cin.getline(sir, 101);

    for (unsigned int i = 0; i < strlen(sir); i++)
    {
        p = strchr(v, sir[i]);
    
        if (p != 0)
        {
            for (unsigned int j = strlen(sir) + 1; j > i; j--)
                sir[j] = sir[j - 1];
            sir[i + 1] = '*';
            OK = 0;
        }
    }
    
    if (OK)
        cout << "FARA VOCALE";
    else
    {
        for (unsigned int i = 0; i < strlen(sir); i++)
            cout << sir[i];
    }

    cout << '\n';
    return 0;
}
