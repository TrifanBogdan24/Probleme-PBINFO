// #890 - NrVocale
#include <iostream>
#include <cstring>

using namespace std;
char sir[100], q;
int v[6] = {0}, Max = -1;

int main()
{
    cin.getline(sir, 255);
    
    for (int i = 0; i < strlen(sir); i++)
    {
        sir[i] = tolower(sir[i]);
     
        if (sir[i] == 'a')
            v[1]++;
        if (v[1] > Max)
        {
            Max = v[1];
            q = 'a';
        }

        if (sir[i] == 'e')
            v[2]++;
        if (v[2] > Max)
        {
            Max = v[2];
            q = 'e';
        }

        if (sir[i] == 'i')
            v[3]++;
        if (v[3] > Max)
        {
            Max = v[3];
            q = 'i';
        }

        if (sir[i] == 'o')
            v[4]++;
        if (v[4] > Max)
        {
            Max = v[4];
            q = 'o';
        }

        if (sir[i] == 'u')
            v[5]++;
        if (v[5] > Max)
        {
            Max = v[5];
            q = 'u';
        }
    }
    
    q = toupper(q);
    cout << q << '\n';
    
    return 0;
}
