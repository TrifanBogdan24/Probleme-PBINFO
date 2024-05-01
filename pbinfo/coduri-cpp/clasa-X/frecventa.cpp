// #138 - Frecventa
#include <iostream>
#include <cstring>

using namespace std;

unsigned int nr_ap = 0, Max_ap = 0;
char s[255], I, *p, litera;

int main()
{
    cin.getline(s, 255);

    for (char I = 'a'; I <= 'z'; I++)
    {
        nr_ap = 0;
        for (unsigned int j = 0; j < strlen(s); j++)
            if (s[j] == I)
                nr_ap++;
        
        if (nr_ap > Max_ap)
        {
            Max_ap = nr_ap;
            litera = I;
        }
    }

    cout << litera << '\n';
    
    return 0;
}