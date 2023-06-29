// #2584 - InsertInvers
#include <iostream>
#include <cstring>

using namespace std;

char sir[255], cuv[255], sep[2] = " ", *p;

int main()
{
    cin.getline(sir, 255);
    p = strtok(sir, sep);
    
    while (p)
    {
        strcpy(cuv, p);
        
        cout << cuv << " ";
        
        for (unsigned int i = strlen(cuv); i >= 1; i--)
            cout << cuv[i - 1];

        cout << " ";
        
        p = strtok(NULL, sep);
    }

    cout << '\n';
    return 0;
}
