// #155 - cifmax
// #155 - cifmax
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char sir[61];
    int frecv_cif[10], nr_max_ap = 0, cif = -1;

    for (int i = 0; i < 10; i++)
        frecv_cif[i] = 0; 

    cin.getline(sir, 61);

    for (unsigned int i = 0; i < strlen(sir); i++)
        if ('0' <= sir[i] && sir[i] <= '9')
            frecv_cif[sir[i] - '0']++;

    
    nr_max_ap = 0;
    cif = -1;
    
    for (int i = 0; i < 10; i++)
    {   
        if (frecv_cif[i] > nr_max_ap)
        {
            nr_max_ap = frecv_cif[i];
            cif = i;
        }
    }

    if (cif >= 0)
        cout << cif;
    else
        cout << "NU";

    cout << '\n';
    return 0;
}
