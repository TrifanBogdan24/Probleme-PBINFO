// #96 - PalindromMaxim
#include <iostream>
#include <cstring>

using namespace std;

unsigned int Max_len = 0;
char sir[255], *p, sep[20] = " :;.,", pal[255];

bool not_case_sensitive_palindrom(char *s)
{
    unsigned int len = strlen(s);
    for (unsigned int i = 0; i < len / 2; i++)
        if (tolower(s[i]) != tolower(s[len - 1 - i]))
            return false;

    return true;
}

int main()
{
    cin.getline(sir, 1000);

    p = strtok(sir, sep);
    
    while (p)
    {
        if (not_case_sensitive_palindrom(p) && strlen(p) > Max_len)
        {
            Max_len = strlen(p);
            strcpy(pal, p);
        }
        
        p = strtok(NULL, sep);
    }

    cout << pal << '\n';
    return 0;
}
