// #94 - EliminareVocale
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char cuv[22], voc[] = "aeiouAEIOU", *p;
    cin.getline(cuv, 22);
    
    int i = 0;
    
    while (i < strlen(cuv))
    {
        if (strchr(voc, cuv[i]))
        {
            for (int j = i; j < strlen(cuv); j++)
                cuv[j] = cuv[j + 1];
        }
        else
            i++;
    }
    
    cout << cuv << '\n';
    
    return 0;
}
