// #278 - FormNr
#include <iostream>
#include <cstring>

using namespace std;

int s, nr;
char a[250];

int main()
{
    cin.getline(a, 255);
    
    int i = 0;
    while (i < strlen(a))
    {
        nr = 0;
        if ('0' <= a[i] && a[i] <= '9')
        {
            while ('0' <= a[i] && a[i] <= '9')
            {
                nr = nr * 10 + a[i] - '0';
                i++;
            }
        }
        else
            i++;
        s = s + nr;
    }
    
    cout << s << '\n';

    return 0;
}
