// #2680 - Poezie
#include <iostream>
#include <cstring>

using namespace std;

int n;
char prop[257], sep[10] = ".,?!";

int main()
{
    cin >> n;
    cin.get();
    
    for (int i = 1; i <= n; i++)
    {
        cin.getline(prop, 256);
        
        for (unsigned int j = 0; j < strlen(prop); j++)
        {
            if (j == strlen(prop) - 1)
                cout << prop[j];
            else if ((strchr(sep, prop[j])) == 0)
                cout << prop[j];
        }

        cout << '\n';
    }
    return 0;
}