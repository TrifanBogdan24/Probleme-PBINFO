// #155 - cifmax
#include <iostream>
#include <cstring>

using namespace std;

int v[11] = {0}, nr_max_ap = -1, rasp = 11, cif;
char sir[254];

int main()
{
    cin.getline(sir, 254);

    for (int i = 0; i < strlen(sir); i++)
    {
        if (isdigit(sir[i]))
        {
            cif = sir[i] - '0';

            v[cif]++;
        
            if (v[cif] > nr_max_ap)
            {
                nr_max_ap = v[cif];
                rasp = cif;
            }
            else if (v[cif] == nr_max_ap && cif < rasp)
                rasp = cif;
        }
    }
    
    if (rasp != 11)
        cout << rasp;
    else
        cout << "NU";
    
    cout << '\n';
    return 0;
}
