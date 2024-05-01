// #104 - EliminarePerechiVocale
#include <iostream>
#include <cstring>

using namespace std;

int p;
char s[10000], voc[11] = "aeiouAEIOU";

void sterge(int poz)
{
    for (int j = poz; j < strlen(s); j++)
        s[j] = s[j + 1];
}

int main()
{
    cin.getline(s, 1000);
    int i = 0;
    
    while (i < strlen(s) - 1)
    {
        int j = i;
        
        while (strchr(voc, s[j]) && strchr(voc, s[j + 1]))
            j++;
        
        if (j == i)
            i++;
        else
        {
            j++;
            while (j != i)
            {
                sterge(i);
                j--;
            }
        }
    }
    
    cout << s << '\n';

    return 0;
}
