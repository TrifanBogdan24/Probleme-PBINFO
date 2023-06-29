// #2678 - FormNr
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char sir[250];
    int suma = 0, nr = 0;
    unsigned int idx = 0;
    
    cin.getline(sir, 255);
    
    while (idx < strlen(sir))
    {
        nr = 0;
        if ('0' <= sir[idx] && sir[idx] <= '9')
        {
            while ('0' <= sir[idx] && sir[idx] <= '9')
            {
                nr = nr * 10 + sir[idx] - '0';
                idx++;
            }
        }
        else
            idx++;
        suma = suma + nr;
    }
    
    cout << suma << '\n';

    return 0;
}